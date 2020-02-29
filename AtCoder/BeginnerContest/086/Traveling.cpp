#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int N, T[100000+5], X[100000+5], Y[100000+5];

bool can(){
    for(int i = 0; i < N; i++){
        int dis = abs(X[i] - X[i+1]) + abs(Y[i] - Y[i+1]);
        int rem = T[i+1] - T[i] - dis;
        // printf("Move from (%d, %d) to (%d, %d) in %d sec\n", X[i], Y[i], X[i+1], Y[i+1], T[i+1]-T[i]);
        if(rem < 0 || rem%2==1) return false;
    }
    return true;
}

int main(){
    cin >> N;
    T[0] = 0; X[0] = 0; Y[0] = 0; 
    for(int i = 1; i <= N; i++) cin >> T[i] >> X[i] >> Y[i];

    if(can())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
