#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int N, M, ans, time_sum;
double q;

void solve(){
    time_sum = 1900 * M + 100 * (N - M);

    q = pow(0.5, M);

    ans = (int)(time_sum / q);

    cout << ans << endl;
}

int main(){
    cin >> N >> M;

    solve();
}
