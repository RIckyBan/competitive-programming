#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

double sx, sy, gx, gy, ans;

void solve(){
    // (sx, sy)と(gx, -gy)を結ぶ
    ll dx = gx - sx;
    sy = abs(sy);
    gy = abs(gy);

    ans = sx + dx * (sy / (sy + gy));

    cout << setprecision(10) << ans << endl; 
}

int main(){
    cin >> sx >> sy >> gx >> gy;

    solve();
}
