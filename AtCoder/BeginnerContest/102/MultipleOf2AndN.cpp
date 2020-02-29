#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int N;

int main(){
    cin >> N;

    if(N % 2 == 0) cout << N << endl;
    else cout << 2 * N << endl;
}
