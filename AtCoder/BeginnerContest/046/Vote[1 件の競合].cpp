#include<iostream>

using namespace std;

int  N;
long long  T[1000 + 5], A[1000 + 5];
long long ans;

void multiply_sets(int i, int j){
    long long t_buff = T[j], a_buff = A[j];
    int cnt = 0;

    while(  || )

    T[j] = t*cnt; A[j] = a*cnt;
}

long long solve(){
    for(int i = 0; i < N-1; i++) 
        multiply_sets(i, i+1);
    return T[N-1] + A[N-1];
}

int main(){
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> T[i] >> A[i];
    }

    ans = solve();

    cout  << ans << endl;
}
