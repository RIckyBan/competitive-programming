#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 1000
#define MAXM 1000
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

struct node {
    int val = -1, cost = 0;
    vi children;
};

ll ans;
int N, M, P, B, C;
vector<node> nodes;

int prop_val(node k){
    if(k.val==-1){
        for(auto i: k.children)
            k.val = max(k.val, prop_val(nodes[i]));
    }
    return k.val;
}

void solve(){
    ll ans = 0;

    for(auto i: nodes[0].children)
        ans += prop_val(nodes[i]);

    cout << ans << endl;
}

int main(){
    cin >> N >> M;

    nodes.resize(N);

    rep(i,N-1){
        cin >> P;
        nodes[P].children.push_back(i+1);
    }

    rep(i,M){
        cin >> B >> C;
        nodes[B].val = C;
    }

    solve();
}
