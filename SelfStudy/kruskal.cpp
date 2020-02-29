#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

#define INF 1e9
#define MAXV 10005
#define MAXE 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll V,E, sum = 0;
bool used[MAXV] = {};
pii edges[MAXE] = {};
priority_queue<pii, vector<pii>, greater<pii> > Q;

class UnionFind {
    public:
        vector<int> rank, size, p;
    
    UnionFind(){}
    UnionFind(int n){
        rank.resize(n, 0);
        size.resize(n, 1);
        p.resize(n, 0);
        for(int i=0; i < n; i++) makeSet(i);
    }

    void makeSet(int x){
        p[x] = x;
        rank[x] = 0;
        size[x] = 1;
    }

    bool same(int x, int y){
        return findSet(x) == findSet(y);
    }

    void unite(int x, int y){
        link(findSet(x), findSet(y));
    }

    void link(int x, int y){
        if(rank[x] > rank[y]){
            p[y] = x;
            size[x] += size[y];
        } else {
            p[x] = y;
            size[y] += size[x];
            if(rank[x] == rank[y]){
                rank[y]++;
            }
        }
    }

    int findSet(int x){
        if( x!= p[x]){
            p[x] = findSet(p[x]);
        }
        return p[x];
    }

    int getSize(int x){
        return size[findSet(x)];
    }
};

void kruskal(){
    UnionFind uft(V);

    while(!Q.empty()){
        pii tmp = Q.top();
        int cst = tmp.first, id = tmp.second;
        Q.pop();
        pii e = edges[id];
        int u = e.first, v = e.second;
        // printf("(%d, %d): %d\n",u,v,cst);

        if(!uft.same(u,v)){
            sum += cst;
            uft.unite(u,v);
        }
    }

    cout << sum << endl;
}

int main(){
    cin >> V >> E;

    rep(i,E){
        int s, t, w;
        cin >> s >> t >> w;
        Q.push(make_pair(w,i));
        edges[i] = make_pair(s,t);
    }

    kruskal();
}
