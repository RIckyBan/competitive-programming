#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXH 55
#define MAXW 55
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans;
int H,W, D[MAXH][MAXW] = {}, nextX, nextY;
string G[MAXH];
queue<pii> Q;

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

void bfs(){
    D[0][0] = 1;
    Q.push(pii(0,0));

    while(!Q.empty()){
        pii tmp = Q.front();
        Q.pop();
        int i = tmp.first, j = tmp.second;

        rep(k, 4){
            nextY = j + dy[k];
            nextX = i + dx[k];

            if(nextY < 0 || H <= nextY || nextX < 0 || W <= nextX)
                continue;
            
            // printf("reached (%d, %d)\n", nextX, nextY);

            if(!D[nextY][nextX] && G[nextY][nextX] == '.'){
                D[nextY][nextX] = D[j][i]+1;
                Q.push(pii(nextX, nextY));
            }
        }
    }
}

void solve(){
    bfs();

    if(D[H-1][W-1])
        cout << H*W - D[H-1][W-1] - ans << endl;
    else
        cout << -1 << endl;
}

int main(){
    cin >> H >> W;
    rep(i, H){
        cin >> G[i];
        rep(j, W){
            if(G[i][j] == '#') ans++;
        }
    } 

    solve();
}
