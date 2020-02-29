#include<iostream>

using namespace std;

int  N, T[1000 + 5], A[1000 + 5];
long long ans;

void multiply_sets(int i, int j){
    int T = T[j], A = A[j];
    int T_buff = T; int A_buff = A;
    while(T[i] <= T_buff && A[i] <= A_buff){
        int i = 1;
        T_buff = T*i;
        A_buff = A*i;
    }
}

long long solve(){

}

int main(){
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> T[i] >> A[i];
    }

    ans = solve();

    cout  << ans << endl;
}
