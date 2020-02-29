// メモ: LISを求めれば良い

#include <iostream>
#include <cmath>

#define INF 1000000

using namespace std;

int N, c[3*10000 + 5], dp[3*10000 + 5], ans = 0;

int binary_search(int N, int thresh);

int main(){
    cin >> N;
    
    fill(dp, dp+N, INF);

    for(int i = 0; i < N; ++i){
        cin >> c[i];
    }

    for(int i = 0; i < N; ++i){
        int index = binary_search(N, c[i]);
        dp[index] = c[i];
    }

    for(int i = 0;i < N; ++i){ //INFをいくつ置換できたか調べる
        if(dp[i]==INF){ 
            break;
        }
        ans++;
    }
    cout << N - ans << endl;
}

int binary_search(int N, int thresh){
    int l = -1; //a[0]が条件を満たすこともある
    int r = N; //a[N-1]が条件を満たさないこともある

    while( r - l != 1){
        int m = floor((l + r)/ 2);
        if(dp[m] >= thresh) r = m;
        else l = m;
    }

    return r;
}