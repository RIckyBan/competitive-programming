// https://atcoder.jp/contests/abc079/tasks/abc079_d

#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll H, W, ans = 0;
int magi[10][10];
vi A[205];

priority_queue<pii, vector<pii>, greater<pii>> Q;

int dist[10], id;
bool used[10];

void Dijkstra() {
    dist[1] = 0;
    Q.push(make_pair(dist[1], 1));

    while(!Q.empty()){
        pii tmp = Q.top();
        Q.pop();
        // cout << tmp. first << " " << tmp.second << endl;
        id = tmp.second;

        if(dist[id] < tmp.first) continue;

        if(!used[id]){
            used[id] = true;
            dist[id] = tmp.first;
            rep(i, 10){
                Q.push(make_pair(dist[id]+magi[i][id], i));
            }
        }
    }
}

void solve(){
    fill(dist, dist+10, INF);
    fill(used, used+10, false);

    Dijkstra();

    rep(i, H){
        rep(j, W){
            if(A[i][j] != -1)
                ans += dist[A[i][j]];
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> H >> W;

    rep(i, 10){
        rep(j, 10){
            cin >> magi[i][j];
        }
    }

    rep(i, H){
        A[i].resize(W);
        rep(j, W){
            cin >> A[i][j];
        }
    }

    solve();
}
