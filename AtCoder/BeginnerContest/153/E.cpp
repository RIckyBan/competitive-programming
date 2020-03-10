#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9+5
#define MAXN 1005
#define MAXH 10005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int H, N, A[MAXH], B[MAXH], dp[MAXN][MAXH], id;

void print_table(){
    rep(i, N+1){
        rep(j, H+1){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}

void solve(){
    rep(i, N+1)rep(j, H+1) dp[i][j] = INF;
    rep(i, N+1) dp[i][0] = 0;

    // print_table();

    // cout << endl;

    for(int i = 1; i <= N; ++i){
        rep(j, H+1){
            dp[i][j] = min(dp[i][j], dp[i-1][j]);
            dp[i][min(j+A[i], H)] = min(dp[i][j]+B[i], dp[i][min(j+A[i], H)]); // 端の部分を何回も書き換えることに注意！！
        }
    }

    // print_table();
    // rep(i, N+1)
    //     cout << dp[i][H] << endl;

    cout << dp[N][H] << endl;
}

int main(){
    cin >> H >> N;
    A[0] = 0;
    B[0] = 0;

    rep(i, N){
        cin >> A[i+1] >> B[i+1];
    }

    solve();
}
