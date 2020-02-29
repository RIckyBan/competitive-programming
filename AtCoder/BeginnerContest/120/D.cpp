#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N, M, A[100005], B[100005];

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
        sizse[x] = 1;
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

void solve(){
    UnionFind UF(N);

    ll cur = N * (N-1) / 2;
    vector<ll> res;

    rep(i,M){
        res.push_back(cur);

        int a = A[M-1-i], b = B[M-1-i];
        if (UF.same(a, b)) continue;

        ll sa = UF.getSize(a), sb = UF.getSize(b);
        cur -= sa * sb;

        UF.unite(a, b);
    }

    reverse(res.begin(), res.end());
    for (int i = 0; i < res.size(); ++i) cout << res[i] <<endl;
}

int main(){
    cin >> N >> M;

    rep(i,M)
        cin >> A[i] >> B[i], --A[i], --B[i];

    solve();
}
