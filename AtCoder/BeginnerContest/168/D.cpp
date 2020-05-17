#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
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

int N, M, dist[MAXN], id;
bool used[MAXN] = {};
vi A, B, G[MAXN], prv[MAXN];

priority_queue<pii, vector<pii>, greater<pii>> Q;

void Dijkstra(int s) {
    fill(dist, dist+N, INF);
    dist[s] = 0;
    
    Q.push(make_pair(dist[s], s));

    while(!Q.empty()){
        pii tmp = Q.top();
        Q.pop();
        // cout << tmp. first << " " << tmp.second << endl;
        id = tmp.second;

        if(dist[id] < tmp.first) continue;

        if(!used[id]){
            used[id] = true;
            dist[id] = tmp.first;
            rep(k, G[id].size()){
                if(!used[G[id][k]]){
                    Q.push(make_pair(dist[id]+1, G[id][k]));
                    prv[G[id][k]].push_back(id);
                }
            }
        }
    }
}

void solve(){
    Dijkstra(0);

    // rep(i, N) cout << dist[i] << endl;
    bool flag = true;

    rep(i, N){
        if(dist[i] == INF){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << "Yes" << endl;
        for(int i = 1; i < N; ++i){
            rep(j, prv[i].size()){
                if(dist[i] == dist[prv[i][j]] + 1){
                    cout << prv[i][j] + 1 << endl;
                    break;
                }
            }
        } 
    } else {
        cout << "No" << endl;
    }

}

int main(){
    cin >> N >> M;
    A.resize(M), B.resize(M);

    rep(i, M) {
        cin >> A[i] >> B[i];
        A[i]--, B[i]--;

        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    solve();
}
