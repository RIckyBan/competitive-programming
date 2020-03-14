#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXK 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans;
int N, M, K, A[MAXN], B[MAXN], C[MAXK], D[MAXK];
vi curr_friend[MAXN], block_list[MAXN];

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

    void unite(int x, int y){ // linkを呼び出す
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

void solve(){
    UnionFind UF = UnionFind(N);

    rep(i, M){
        // cout << "unite A of size " << UF.getSize(A[i]);
        // cout << " and B of size " << UF.getSize(B[i]) << endl;
        if(!UF.same(A[i], B[i]))
            UF.unite(A[i], B[i]);
    }

    // rep(i, N)
    //     cout << curr_friend[i].size() << endl;

    rep(i, N){
        int ans = UF.getSize(i) - 1 - curr_friend[i].size();
        for(auto v: block_list[i]){
            if(UF.same(i, v)) ans--;
        }
        cout << ans << endl;
    }


}

int main(){
    cin >> N >> M >> K;

    rep(i, M){
        cin >> A[i] >> B[i];
        A[i]--, B[i]--;
        curr_friend[A[i]].push_back(B[i]);
        curr_friend[B[i]].push_back(A[i]);
    }

    rep(i, K){
        cin >> C[i] >> D[i];
        C[i]--, D[i]--;
        block_list[D[i]].push_back(C[i]);
        block_list[C[i]].push_back(D[i]);
    }

    solve();
}
