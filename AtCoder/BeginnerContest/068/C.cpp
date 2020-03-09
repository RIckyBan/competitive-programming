#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 200005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int N, M, a[MAXM], b[MAXM],  cur, tmp, level = 0;
vi d[MAXM] = {}, dist(MAXM, -1);
queue<int> q;

void dfs(){
    q.push(0);
    dist[0] = 0;

    while(!q.empty()){
        cur = q.front();
        q.pop();
        
        rep(i, d[cur].size()){
            tmp = d[cur][i];
            if(dist[tmp]==-1){
                // cout << tmp << " ";
                q.push(tmp);
                dist[tmp] = dist[cur] + 1;
            }
        }
        // cout << endl;
    }
}

void solve(){
    dfs();

    if(dist[N-1]==2)
        cout << "POSSIBLE" << endl;
    else
        cout << "IMPOSSIBLE" << endl;
}

int main(){
    cin >> N >> M;

    rep(i,M){
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
        d[a[i]].push_back(b[i]);
        d[b[i]].push_back(a[i]);
    }

    solve();
}
