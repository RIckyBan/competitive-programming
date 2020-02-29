#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>

ll N, D, X, ans = 0;
int A[105];

void solve(){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < D; j++){
            int buff = A[i];
            if(j%buff==0) ans++;
        }        
    }
    cout << ans + X << endl;
}

int main(){
    cin >> N >> D >> X;

    for(int i = 0; i < N; i++) cin >> A[i];

    solve();
}
