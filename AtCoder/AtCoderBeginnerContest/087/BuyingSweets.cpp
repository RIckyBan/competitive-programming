#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int X, A, B;

int main(){
    cin >> X >> A >> B;

    cout << (X - A) % B << endl;
}
