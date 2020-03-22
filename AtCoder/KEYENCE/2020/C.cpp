#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans;
int N,K, S;
vi v;

void solve(){
    rep(i, K){
        v.push_back(S);
    }

    if(N > K){
        rep(i, N-K){
            if(S==1) v.push_back(S+1);
            else v.push_back(S - 1);
        }
    }

    rep(i, N){
        cout << v[i];

        if(i==N-1) cout << endl;
        else cout << " ";
    }
}

int main(){
    cin >> N >> K >> S;

    solve();
}
