#include <iostream>
#include<cmath>

using namespace std;

int N, h[100000+5], Cost[100000+5] = {0};

void solve(){
    Cost[1] = 0;
    Cost[2] = abs(h[2]-h[1]);

    for(int i = 3; i <= N; i++)
        Cost[i] = min(abs(h[i]-h[i-1])+Cost[i-1], abs(h[i]-h[i-2])+Cost[i-2]);

    cout << Cost[N] << endl;
}

int main(){
    cin >> N;
    for(int i = 1; i <= N; i++) cin >> h[i];

    solve();
}