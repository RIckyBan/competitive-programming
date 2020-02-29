#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int N, M, K[35],A[35][35] = {}, cnt[31]={}, ans = 0;

void solve(){
    for(int i = 1; i <= 30; i++) if(cnt[i]==N) ans++;
    cout << ans << endl;
}

int main(){
    cin >> N >> M;

    for(int i = 1; i <= N; i++){
        cin >> K[i];
        for(int k = 0; k < K[i]; k++) {
            cin >> A[i][k];
            cnt[A[i][k]]++;
        }
    }

    solve();
}
