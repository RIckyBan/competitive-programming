#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

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

ll ans;
int N,M;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
vector<vi> a, b;

bool is_edge(int x1, int y1, int x2, int y2, int x, int y) {
    return x == x1 or x == x2 or y == y1 or y == y2;
}

void solve(){
    int x1 = 1, y1 = 1;
    int x2 = M-2, y2 = N-2;

    while(1){
        for(int y = y1; y <= y2; y++) {
            for(int x = x1; x <= x2; x++) {
                if(is_edge(x1, y1, x2, y2, x, y)) {
                    // cout << "(" << x << ", " << y << "): " << b[y][x] << endl;
                    int k = INF;
                    rep(i, 4) { 
                        k = min(k, b[y+dy[i]][x+dx[i]]);
                    }
                    a[y][x] = k;
                    rep(i, 4) { 
                        b[y+dy[i]][x+dx[i]] -= k;
                    }
                }
            }
        }
        x1++; y1++; x2--; y2--;

        if(x2 - x1 < 0 or y2 - y1 < 0) break;
    }

    rep(i, N) {
        rep(j, M) {
            cout << a[i][j];
            if(j == M-1) cout << endl;
        }
    }
}

int main(){
    string tmp;

    cin >> N >> M;
    a.resize(N), b.resize(N);

    rep(i, N) {
        a[i].resize(M);
        b[i].resize(M);
        cin >> tmp;
        rep(j, M) {
            a[i][j] = 0;
            b[i][j] = tmp[j] - '0';
        }
    }

    solve();
}
