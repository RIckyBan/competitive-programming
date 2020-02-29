#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include<queue>

using namespace std;

#define INF 1e9
#define MAXV 10005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll V,E, sum = 0;
bool used[MAXV] = {};
vector <pii> G[MAXV];
priority_queue<pii, vector<pii>, greater<pii> > Q;

void prim(){
    Q.push(pii(0,0)); //始点として頂点0を選択

    while(!Q.empty()){
        pii p = Q.top();
        int cst = p.first, v = p.second;
        // printf("Cost to %d: %d\n",v, cst);
        Q.pop();
        if(used[v])
            continue;
        used[v] = true;
        sum += cst;
        for(int i = 0; i < G[v].size(); i++)
            Q.push(G[v][i]);
    }

    cout << sum << endl;
}

int main(){
    cin >> V >> E;

    rep(i,E){
        int s, t, w;
        cin >> s >> t >> w;
        pii e;
        e.first = w;
        e.second = t;
        G[s].push_back(e);
        e.second = s;
        G[t].push_back(e); //無向グラフなので逆も
    }

    prim();
}
