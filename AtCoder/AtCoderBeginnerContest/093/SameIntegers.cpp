#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int A,B,C, max_v, ans = 0;

void solve(){
    max_v = max(max(A, B), C);

    ans = 3 * max_v - (A + B + C);

    if(ans % 2 == 0) cout << ans / 2 << endl;
    else cout << (ans + 3) / 2 << endl;
}

int main(){
    cin >> A >> B >> C;

    solve();
}
