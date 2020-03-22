#include <iostream>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 1005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int N, ans = 10000;
string S, L, R;
int dp[MAXN] = {};

string candidates[16] = {
    "AA", "AB", "AX", "AY",
    "BA", "BB", "BX", "BY",
    "XA", "XB", "XX", "XY",
    "YA", "YB", "YX", "YY",
    };

void solve(){
    rep(i, 16){
        for(int j = i+1; j < 16; ++j){
            L = candidates[i];
            R = candidates[j];
            // L = "AB";
            // R = "XY";

            dp[0] = 0;
            dp[1] = 1;

            for(int i = 2; i <= N; ++i){
                dp[i] = dp[i-1] + 1;

                // cout << S.substr(i-2, 2) << endl;
                
                if(S.substr(i-2, 2) == L || S.substr(i-2, 2) == R)
                    dp[i] = min(dp[i], dp[i-2] + 1);
            }

            ans = min(ans, dp[N]);
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> N >> S;

    solve();
}
