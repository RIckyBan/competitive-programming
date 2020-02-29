#include <iostream>
#include<cmath>

using namespace std;

int N, A[100000+5], B[100000+5], C[100000+5], DP[100000+5][3], ans;

void solve(){
    DP[0][0] = 0; DP[0][1] = 0; DP[0][2] = 0;

    for(int i = 1; i <= N; i++){
        DP[i][0] = A[i] + max(DP[i-1][1], DP[i-1][2]);
        DP[i][1] = B[i] + max(DP[i-1][0], DP[i-1][2]);
        DP[i][2] = C[i] + max(DP[i-1][0], DP[i-1][1]);
    }

    ans = max(DP[N][0], DP[N][1]);
    ans = max(ans, DP[N][2]);

    cout << ans << endl;
}

int main(){
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> A[i] >> B[i] >> C[i];

    solve();
}