#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define INF 1e9

int N, a, b, c;

bool Arr[305] = {0};
int dp[305];

bool check(int i){
    return i != a && i != b && i != c && i >= 0;
}

void solve(){
    Arr[0]  = true;

    for(int i = 0; i < 100; i++){
        for(int j = N; j >= 0; j--){
            if(j == 1 || j == 2)
                Arr[j] = true;
            else
                Arr[j] = Arr[j-1] || Arr[j-2] || Arr[j-3] ;
        }
        Arr[a] = false; Arr[b] = false; Arr[c] = false;
        if(Arr[N]) break;
    }

    if(Arr[N]) cout << "YES" << endl;
    else cout << "NO" << endl;
}

void solve_DP(){
    fill(dp, dp+N, INF);
    
    if(check(N))
        dp[N] = 0;

    for(int i = N; i >= 0; i--){
        for(int j = 1; j <= 3; j++){
            if(check(i-j))
                dp[i-j] = min(dp[i-j], dp[i]+1);
        // printf("DP[%d] = %d\n", i, dp[i]);
        }
    }

    if(dp[0] <= 100) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    cin >> N >> a >> b >> c;

    solve_DP();
}
