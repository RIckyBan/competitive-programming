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

int dist;
ll txa, txb, tya, tyb, T, V, N;
vector<ll> X, Y;
bool flag;

void solve(){
    dist = INF;

    rep(i, N){
        dist = min(dist, (int)ceil(sqrt((X[i] - txa)*(X[i] - txa) + (Y[i] - tya)*(Y[i] - tya)) + sqrt((X[i] - txb)*(X[i] - txb) + (Y[i] - tyb)*(Y[i] - tyb))));
    }

    // cout << dist << endl;

    if(dist <= T * V) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    cin >> txa >> tya >> txb >> tyb >> T >> V >> N;

    X.resize(N);
    Y.reserve(N);

    rep(i, N) cin >> X[i] >> Y[i];

    solve();
}
