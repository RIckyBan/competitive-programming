#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int N, a, b, res, ans = 1000000000;

int main(){
    cin >> N;

    int range = sqrt(N);

    for(int i = 1; i <= range; i++){
        a = N / i;
        b = N / a;
        res = N - a * b;
        ans = min(ans, abs(a-b)+res);
    }

    cout << ans << endl;
}
