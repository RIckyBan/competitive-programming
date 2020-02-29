#include <iostream>
#include<cmath>

using namespace std;

int N, K, h[100000+5], Cost[100000+5] = {0};

int select_k(int i, int K){
    int cost = 10000000000; //十分大きく！
    for(int k = 1; k <= K; k++)
        cost = min(cost, abs(h[i]-h[i-k])+Cost[i-k]);
    return cost;
}

void solve(){
    Cost[1] = 0;
    Cost[2] = abs(h[2]-h[1]);

    for(int i = 3; i <= N; i++)
        Cost[i] = select_k(i, min(K, i-1));

    cout << Cost[N] << endl;
}

int main(){
    cin >> N >> K;

    for(int i = 1; i <= N; i++) cin >> h[i];

    solve();
}