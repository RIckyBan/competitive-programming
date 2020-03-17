#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 105
#define MAXM 1000000005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans, curr = 0;
ll N, K, M, R;
vi S;

void solve(){
    rep(i, K) curr += S[i];

    // cout << curr << endl;

    ll diff = K*R - curr;

    if(diff <= 0) cout << 0 << endl;
    else if(diff + S[K-1] - M > 0) cout << -1 << endl;
    else {
        cout << diff + S[K-1] << endl;
    }
}

int main(){
    cin >> N >> K >> M >> R;

    S.resize(N);

    rep(i, N-1) cin >> S[i];

    sort(S.begin(), S.end());
    reverse(S.begin(), S.end());

    solve();
}
