#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int N, C[100 + 5];

int arr_num_divisors_trial_division(int index){
    int n = C[index];
    int cnt = 0;
    
    for(int i = 0; ; i++){
        if(i == index) break;
        if(n % C[i] == 0) cnt += 1;
    }

    return cnt;
}

double solve(){
    double psum = 0.0, buff;

    for(int i = 0; i < N; i++){
        int S = arr_num_divisors_trial_division(i);

        if(S % 2 != 0)
            buff = 0.5;
        else{
            double Sd = (double) S;
            buff = (Sd+1)/(2*Sd+2);
        }

        psum += buff;
        cout << C[i] << ": " << S << endl;
    }

    return psum;
}

int main(){
    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> C[i];
    }

    sort(C, C+N);

    cout << solve() << endl;
}