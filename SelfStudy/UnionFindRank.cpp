#include<iostream>
#include<vector>

using namespace std;

class UnionFind {
    public:
        vector<int> rank, size, p;
    
    UnionFind(){}
    UnionFind(int n){ // 初期化: rankが0のノードをn個生成する
        rank.resize(n, 0); // rank(木の深さ)
        size.resize(n, 1); // ノード数を親番号で管理
        p.resize(n, 0); // 親の番号
        for(int i=0; i < n; i++) makeSet(i);
    }

    void makeSet(int x){// 各ノードの親を自分自身で初期化
        p[x] = x;
        rank[x] = 0;
        size[x] = 1;
    }

    int findSet(int x){
        if( x!= p[x]){ // 根を見つけるまで遡る
            p[x] = findSet(p[x]); // 経路圧縮
        }
        return p[x];
    }

    bool same(int x, int y){
        return findSet(x) == findSet(y);
    }

    void unite(int x, int y){
        link(findSet(x), findSet(y));
    }

    void link(int x, int y){ // 親が管理する集合を連結
        if(rank[x] > rank[y]){ // rankが小さい方の親を、大きい方の子とする
            p[y] = x;
            size[x] += size[y]; // sizeを更新
        } else {
            p[x] = y;
            size[y] += size[x];
            if(rank[x] == rank[y]){ // rankが等しければインクリメントする
                rank[y]++;
            }
        }
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