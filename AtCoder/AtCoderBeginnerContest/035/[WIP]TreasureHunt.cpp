#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

#define MAX_V 100005
ll INF = 1LL<<60;

int V, M, T, s, t, cost, d[MAX_V], d_rev[MAX_V], A[MAX_V];

struct edge {ll to, cost;};
typedef pair<int, int> P; //(最短距離, 頂点番号)

vector<edge> G[MAX_V], G_rev[MAX_V];

void dijkstra(int s){
  priority_queue<P, vector<P>, greater<P> > que;
  fill(d, d+V, INF);
  d[s] = 0;
  que.push(P(0,s));

  while(!que.empty()){
      P p = que.top(); que.pop();
      int v = p.second;
      if(d[v] < p.first) continue;
      for(int i = 0; i < G[v].size(); i++){
          edge e = G[v][i];
          if(d[e.to] > d[v] + e.cost){
              d[e.to] = d[v] + e.cost;
              que.push(P(d[e.to], e.to));
          }
      }
  }
}

void dijkstra_rev(int s){
  priority_queue<P, vector<P>, greater<P> > que;
  fill(d_rev, d_rev+V, INF);
  d_rev[s] = 0;
  que.push(P(0,s));

  while(!que.empty()){
      P p = que.top(); que.pop();
      int v = p.second;
      if(d_rev[v] < p.first) continue;
      for(int i = 0; i < G_rev[v].size(); i++){
          edge e = G_rev[v][i];
          if(d_rev[e.to] > d_rev[v] + e.cost){
              d_rev[e.to] = d_rev[v] + e.cost;
              que.push(P(d_rev[e.to], e.to));
          }
      }
  }
}

void solve(){
  dijkstra(0);
  dijkstra_rev(0);

  ll ans = 0;
  rep(i,V)
    ans = max(ans,(ll)((T - d[i] - d_rev[i])*A[i]));

  cout << ans << endl;
}

int main(){
  cin >> V >> M >> T;

  rep(i,V) cin >> A[i];

  rep(i,M){
      cin >> s >> t >> cost;
      s--, t--;
      edge buff;
      buff.to = t, buff.cost = cost;
      G[s].push_back(buff);
      buff.to = s;
      G_rev[t].push_back(buff);
  }

  solve();
}
