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

ll ans = 0, N, S;
vll X, Y, P;

void solve(){
    for(int i = 0; i < N; i++){
        ans += P[i] * min(abs(X[i]), abs(Y[i]));
    }

    cout << ans << endl;
}

int main(){
    cin >> N;
    X.resize(N);
    Y.resize(N);
    P.resize(N);

    rep(i, N) cin >> X[i] >> Y[i] >> P[i];

    solve();
}
