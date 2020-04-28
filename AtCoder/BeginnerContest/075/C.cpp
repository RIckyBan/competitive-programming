#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 55
#define MAXM 55
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans = 0;
int N,M;
vi A,B;

struct UnionFind {
    vector<int> par;
    
    UnionFind(int n) : par(n, -1) { }
    void init(int n) { par.assign(n, -1); }
    
    int root(int x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
    
    bool issame(int x, int y) {
        return root(x) == root(y);
    }
    
    bool merge(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y); // merge technique
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    
    int size(int x) {
        return -par[root(x)];
    }
};

void solve(){
    rep(k, M){
        UnionFind UF = UnionFind(N);

        rep(i, M){
            if(i==k) continue;
            UF.merge(A[i], B[i]);
            }

        if(UF.size(0) != N) ans++;
    }

    cout << ans << endl;
}

int main(){
    cin >> N >> M;
    A.resize(M), B.resize(M);

    rep(i, M) {
        cin >> A[i] >> B[i];
        --A[i], --B[i];
    }
    solve();
}
