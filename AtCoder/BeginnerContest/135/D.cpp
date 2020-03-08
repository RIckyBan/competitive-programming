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

#define MOD 1000000007

int nxt, N, tmp;
string S;
ll dp[MAXN][13]={};

void print_table(){
    rep(i,N){
        rep(j,13){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}

void solve(){
    if(S[0]=='?'){
        rep(i, 10){
            dp[0][i] = 1;
        }
    } else {
        tmp = (int)(S[0]) - '0';
        dp[0][tmp] = 1;
        // cout << tmp << endl;
    }

    for(int i=1; i < N; ++i){
        rep(j, 13){
            if(S[i]!='?'){
                tmp = (int)(S[i]) - '0';
                nxt = (10*j + tmp) % 13;
                dp[i][nxt] += dp[i-1][j];
                dp[i][nxt] %= MOD;
            } else {
                rep(k, 10){
                    nxt = (10*j + k) % 13;
                    dp[i][nxt] += dp[i-1][j];
                    dp[i][nxt] %= MOD;
                }
            }
        }
    }

    // print_table();

    cout << dp[N-1][5] << endl;
}

int main(){
    cin >> S;
    N = S.length();

    solve();
}
