#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int D, N;

int main(){
    cin >> D >> N;

    if(N == 100) N = 101;
    
    N *= pow(100,D);
    
    cout << N << endl;
}
