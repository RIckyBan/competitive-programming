#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXH 105
#define MAXW 105
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int H,W,ans;
string D[MAXH];
int dx[2] = {0, -1}, dy[2] = {-1, 0}, memo[MAXH][MAXW];

bool isInside(int x, int y){
    return 0 <= x && x <= W && 0 <= y && y <= H;
}

int dfs(int x, int y){
    int res = INF;

    if(memo[y][x] != -1) return memo[y][x];

    rep(i, 2){
        if(isInside(x+dx[i], y+dy[i])){
            if(D[y][x] == '.' &&  D[y+dy[i]][x+dx[i]] == '#') res = min(res, dfs(x+dx[i], y+dy[i])+1);
            else res = min(res, dfs(x+dx[i], y+dy[i]));
        }
    }

    memo[y][x] = res;
    return res;
}

void solve(){
    --H, --W;

    ans = dfs(W, H);

    if(D[H][W] == '#') ans++;
    
    cout << ans << endl;
}

int main(){
    cin >> H >> W;

    rep(i, H) cin >> D[i];

    fill(memo[0], memo[MAXH], -1);
    memo[0][0] = 0;

    solve();
}
