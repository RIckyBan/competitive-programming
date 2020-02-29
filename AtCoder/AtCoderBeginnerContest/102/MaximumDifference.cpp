#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int N, A[105], ans = 0;

int main(){
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    for(int i = 0; i < N-1; i++){
        for(int j = i+1; j < N; j++) ans = max(ans, abs(A[i] - A[j]));
    }

    cout << ans << endl;
}
