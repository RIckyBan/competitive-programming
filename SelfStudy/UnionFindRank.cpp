#include<iostream>
#include<vector>

using namespace std;

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

int main(){
    int n, a, b, q, t;

    cin >> n >> q;
    UnionFind UF = UnionFind(n);

    for(int i=0; i < q; i++){
        cin >> t >> a >> b;
        if(t==0) UF.unite(a, b);
        else if(t==1){
            if(UF.same(a, b)) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }

    return 0;
}