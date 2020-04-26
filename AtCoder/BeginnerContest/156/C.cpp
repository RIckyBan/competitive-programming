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

ll ans = INF, tmp;
int N, P;
vi X;

void solve(){
    for(int p = 0; p <= 100; ++p){
        tmp = 0;
        rep(i, X.size()){
            tmp += (X[i]-p)*(X[i]-p);
        }
        ans = min(tmp, ans);
    }

    cout << ans << endl;
}

int main(){
    cin >> N;
    X.resize(N);

    rep(i, N) cin >> X[i];

    sort(X.begin(), X.end());

    solve();
}
