#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll N, M;
vi A;

void solve(){
    rep(i, M){
        N -= A[i];
    }

    if(N < 0) cout << -1 << endl;
    else cout << N << endl;
}

int main(){
    cin >> N >> M;
    A.resize(M);

    rep(i, M) cin >> A[i];

    solve();
}
