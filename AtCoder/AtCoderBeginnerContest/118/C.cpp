#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int N, A[100005], buff;

ll GCD(ll a, ll b){
    if(b==0) return a;

    return GCD(b, a % b);
}

void solve(){
    buff = A[0];
    for(int i = 1; i < N;i++){
        buff = GCD(buff, A[i]);
    }
    cout << buff << endl;
}

int main(){
    cin >> N;
    for(int i = 0; i < N; i++) cin >> A[i];

    solve();
}
