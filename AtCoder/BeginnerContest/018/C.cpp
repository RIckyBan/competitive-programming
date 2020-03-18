#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXR 505
#define MAXC 505
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans;
int R,C,K, cnt = 0;
string board[MAXR];
bool flag[MAXR][MAXC] = {};

void printBoard(){
    rep(i, R){
        rep(j ,C){
            if(flag[i][j]) cout << "o ";
            else cout << "x ";
        }
        cout << endl;
    }
}

void solve(){
    rep(i, R-2*K+2){
        rep(j, C-2*K+2){
            // cout << "(" << K - 1 + i << ", " << K - 1 +  j << ")" << endl;
            if(flag[K-1+i][K-1+j]){
                cnt++;
            }
        }   
    }

    cout << cnt << endl;
}

bool insideBoard(int i, int j){
    return 0 <= i && i <= R && 0 <= j && j <= C;
}

int main(){
    cin >> R >> C >> K;

    rep(i ,R)
        fill(flag[i], flag[i]+C, true);

    rep(i, R){
        cin >> board[i];
        rep(j, C){
            if(board[i][j]=='x'){
                rep(k, K){
                    rep(l, k+1){
                        if(insideBoard(i+l, j+(k-l))) flag[i+l][j+(k-l)] = false;
                        if(insideBoard(i-l, j+(k-l))) flag[i-l][j+(k-l)] = false;
                        if(insideBoard(i+l, j-(k-l))) flag[i+l][j-(k-l)] = false;
                        if(insideBoard(i-l, j-(k-l))) flag[i-l][j-(k-l)] = false;
                    }
                }
            }
        }
    }

    // printBoard();

    solve();
}
