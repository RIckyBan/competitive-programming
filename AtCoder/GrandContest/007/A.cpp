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

ll cnt = 0;
ll H,W;
int dx[2] = {0,1};
int dy[2] = {1,0}; 
vector<string> S;
bool flag;

bool dfs(int x, int y){
    bool ans;
    // cout << x << " " << y << endl;
    if(x < 0 || x >= W || y < 0 || y >= H) ans =  false;
    if(S[x][y] == '.') ans =  false;
    if(S[x][y] == '#') {
        if( x == H -1 && y == W -1) ans = true;
        else ans =  dfs(x+dx[0], y+dy[0]) || dfs(x+dx[1], y+dy[1]);
    }
    return ans;
}

bool search(){
    int x = 0;
    int y = 0;

    return dfs(x, y);
}

void solve(){
    if(search()) {
        cout << "Possible" << endl;
    } else {
        cout << "Impossible" << endl;
    }
}

int main(){
    cin >> H >> W;

    S.resize(H);
    rep(i,H){
        cin >> S[i];

        rep(j, W) {
            if(S[i][j] == '#') {
                cnt++;
            }
        }
    }

    if(cnt != H + W - 1) {
        cout << "Impossible" << endl;
    } else {
        solve();
    }
}
