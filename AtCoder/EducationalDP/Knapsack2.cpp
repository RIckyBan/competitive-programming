#include <iostream>
#include<cmath>

using namespace std;

int N, W, w[100+5], v[100+5], buffv = 0, vsum = 0;
long long DP[100+5][100000+5]; //DP[N][V]

void solve(){
    //配列の初期化
    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= vsum; j++ ){
            if(j == 0) DP[i][j] = 0;//v=0はW=0で得る
            else DP[i][j] = 1000000000+5; //制約より十分大きく
        }
    }

    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= vsum; j++ ){
            if(j - v[i] >= 0 && DP[i-1][j-v[i]] + w[i] <= W){
                DP[i][j] = min(DP[i-1][j], DP[i-1][j-v[i]] + w[i]);//書き込み
                buffv = max(buffv, j);
            }
            else DP[i][j] = DP[i-1][j];
        }
    }

    //テーブルの表示
    // cout << "Ltable:" << endl;
    // for(int row=0; row <= N; ++row){
    // for(int col = 0; col <= vsum; ++col){
    //     cout << DP[row][col] << " ";
    // }
    // cout << endl;
    // }

    cout << buffv << endl;
}

int main(){
    cin >> N >> W;
    for(int i = 1; i <= N; i++){
        cin >> w[i] >> v[i];
        vsum += v[i];
    } 

    solve();
} 