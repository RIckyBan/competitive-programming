#include <iostream>
#include <cmath>
#include <vector>
#include <string>
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

ll ans;
int N, M;
vi A, B, C, D;

void calcL1Norm(int x, int y){
    int tmp = INF;
    int res, dist;

    rep(i, M){
        dist = abs(x - C[i]) + abs(y - D[i]);
        if(dist < tmp){
            tmp = dist;
            res = i;
        }
    }
    cout << res+1 << endl;
}

void solve(){
        rep(i, N) calcL1Norm(A[i], B[i]);
}

int main(){
    cin >> N >> M;
    
    A.resize(N, 0);
    B.resize(N, 0);
    rep(i, N) cin >> A[i] >> B[i];

    C.resize(M, 0);
    D.resize(M, 0);
    rep(i, M) cin >> C[i] >> D[i];

    solve();
}
