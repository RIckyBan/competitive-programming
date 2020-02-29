#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long


int DP[105][10005] = {};
ll N, p[105], ans = 0;

int main(){
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> p[i];

    for(int i = 0; i <= N; i++) DP[i][0] = 1;

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= 10000; j++){
            if(j >= p[i]){
                DP[i][j] = max(DP[i-1][j], DP[i-1][j-p[i]]);
            }
            else
                DP[i][j] = DP[i-1][j];
        }
    }
    
    for(int j = 0; j <= 10000; j++) ans += DP[N][j];

    cout << ans << endl;
}
