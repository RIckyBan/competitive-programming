#include<iostream>
#include<vector>

using namespace std;

#define ll long long

ll N, Q, p, a, b;

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
    cin >> N >> Q;
    UnionFind UF = UnionFind(N);

    for(int i=0; i < Q; i++){
        cin >> p >> a >> b;
        if(p==0) UF.unite(a, b);
        else if(p==1){
            if(UF.same(a, b)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
}