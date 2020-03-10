#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define MAXN 1005
#define MAXH 10005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int H, N, A[MAXH], B[MAXH], id;

ll dp[MAXN][MAXH], INF=1e9+5;

void print_table(){
    rep(i, N+1){
        rep(j, H+1){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}

void solve(){
    rep(i, N+1) rep(j, H+1) dp[i][j] = INF;
    dp[0][0] = 0;

    // print_table();

    // cout << endl;

    rep(i, N){
        rep(j, H+1){
            dp[i+1][j] = min(dp[i+1][j], dp[i][j]);    
            dp[i+1][min(j+A[i], H)] = min(dp[i+1][j] + B[i], dp[i+1][min(j+A[i], H)]);
        }
    }

    // print_table();
    // rep(i, N+1)
    //     cout << dp[i][H] << endl;

    cout << dp[N][H] << endl;
    }

int main(){
    cin >> H >> N;

    rep(i, N){
        cin >> A[i] >> B[i];
    }

    // rep(i, N+1)
    //     cout << A[i] << " " << B[i] << endl;
    solve();
}
