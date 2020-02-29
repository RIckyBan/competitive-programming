#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll x, y, res = 1LL<<60;

void solve(){
    if (x <= y) res = min(res, y-x);
    if (-x <= y) res = min(res, y+x+1);
    if (x <= -y) res = min(res, -y-x+1);
    if (-x <= -y) res = min(res, -y+x+2);

    cout << res << endl;
}

int main(){
    cin >> x >> y;

    solve();
}
