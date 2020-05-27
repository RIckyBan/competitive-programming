#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 3005
#define MAXT 3005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int ans = 0, N, T;
vi A,B, dp[MAXN];


void solve(){
    rep(i, N+1) dp[i].resize(T+1, -1);
    rep(i, N+1) dp[i][0] = 0;

    for(int i = 0; i < N; ++i){
        for(int j = 0; j < T; ++j){
            if(dp[i][j] != -1){
                dp[i+1][min(j+A[i], T)] = max({dp[i][j] + B[i], dp[i+1][min(j+A[i], T)], dp[i][min(j+A[i], T)]});
                dp[i+1][T] = max(dp[i+1][T], dp[i][T]);
            }
        }
    }

    rep(i, N+1){
        rep(j, T+1)
            ans = max(ans, dp[i][j]);
    }
    cout << ans << endl;
}

int main(){
    cin >> N >> T;
    A.resize(N), B.resize(N);

    rep(i, N) cin >> A[i] >> B[i];

    solve();
}
