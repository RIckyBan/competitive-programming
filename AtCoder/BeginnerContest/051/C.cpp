#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 2005
#define MAXM 2005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

string ans = "";
int sx, sy, tx, ty;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
string dirc = "RULD";

bool flag[MAXN][MAXM] = {};
int dist[MAXN][MAXM], dist_rev[MAXN][MAXM];

void solve(){
    rep(i, tx - sx) ans += 'R';
    rep(i, ty - sy) ans += 'U';

    rep(i, tx - sx) ans += 'L';
    rep(i, ty - sy) ans += 'D';

    ans += 'L';

    rep(i, 1+ty - sy) ans += 'U';
    rep(i, 1+tx - sx) ans += 'R';

    ans += "DR";

    rep(i, 1+ty - sy) ans += 'D';
    rep(i, 1+tx - sx) ans += 'L';

    ans += 'U';

    cout << ans << endl;
}

int main(){
    cin >> sx >> sy >> tx >> ty;

    solve();
}
