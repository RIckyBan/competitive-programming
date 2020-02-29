#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

ll A, B, C, X = 1;

int main(){
    cin >> A >> B >> C;

    X *= A;
    X = (B * X) % (1000000007);
    X = (C * X) % (1000000007);

    cout << X << endl;
}
