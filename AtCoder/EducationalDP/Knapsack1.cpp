#include <iostream>
#include<cmath>

using namespace std;

int N, W, w[100000+5], v[100000+5];
long long ans, DP[100+5][100000+5]={0}; //DP[N][W]

void solve(){

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= W; j++ ){
            if(j - w[i] >= 0)
                DP[i][j] = max(DP[i-1][j], DP[i-1][j-w[i]] + v[i]);
            else DP[i][j] = DP[i-1][j];
        }
    }

    cout << DP[N][W] << endl;
}

int main(){
    cin >> N >> W;
    for(int i = 1; i <= N; i++) cin >> w[i] >> v[i];

    solve();
}