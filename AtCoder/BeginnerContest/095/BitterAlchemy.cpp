#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int N, X, M[105], minv = 100000000;

int main(){
    cin >> N >> X;

    for(int i = 0; i < N; i++){
        cin >> M[i];
        minv = min(minv, M[i]);
        X -= M[i];
    }

    cout << N + X/minv << endl;
}
