#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int N, id;
vi W, ans;

void solve(){
    rep(i, N){
        if(i == 0) ans.push_back(W[i]);
        else {
            auto itr = lower_bound(ans.begin(), ans.end(), W[i]);
            if(itr == ans.end()) ans.push_back(W[i]);
            else {
                id = itr - ans.begin();
                ans[id] = W[i];
            }
        }
    }

    cout << ans.size() << endl;
}

int main(){
    cin >> N;
    W.resize(N);

    rep(i,N) cin >> W[i];

    solve();
}
