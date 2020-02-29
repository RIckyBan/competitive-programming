#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

double T, X;

int main(){
    cin >> T >> X;

    double ans = T / X;

    printf("%.6f\n", ans);
}
