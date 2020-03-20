#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define MOD 1000000007
#define MAXH 1005
#define MAXW 1005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int H,W, board[MAXH][MAXW] = {};
ll ans = 0, memo[MAXH][MAXW] = {};
int nextH[4] = {-1, 1, 0, 0}, nextW[4] = {0, 0, -1, 1};

bool insideBoard(int i, int j){
    return 0 <= i && i < H && 0 <= j && j < W;
}

ll dfs(int i, int j){
    if(memo[i][j]!=0) return memo[i][j];

    ll cnt = 1;

    rep(k, 4){
        if(insideBoard(i+nextH[k], j+nextW[k])){
            if(board[i+nextH[k]][j+nextW[k]] > board[i][j]){
                cnt += dfs(i+nextH[k], j+nextW[k]);
                cnt %= MOD;
            }
        }
    }

    memo[i][j] = cnt;

    return cnt;
}

void solve(){
    rep(i, H) rep(j, W){
        ans += dfs(i, j);
        ans %= MOD;
    } 

    cout << ans << endl;
}

int main(){
    cin >> H >> W;

    rep(i,H){
        rep(j, W){
            cin >> board[i][j];
        }
    }

    solve();
}
