#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans = 0, N, K, minVal, maxVal;

vector<ll> csum;

void solve(){
    for(int k = K; k <= N+1; ++k){
        maxVal = csum[N+1] - csum[N+1-k];
        minVal = csum[k] - csum[1];
        // cout << maxVal << " - " << minVal << endl;
        ans += maxVal - minVal + 1;
        ans %= MOD;
    }

    cout << ans << endl;
}

int main(){
    cin >> N >> K;

    csum.resize(N+1);

    csum[0] = 0;
    rep(i, N+1) csum[i+1] = csum[i] + i;

    // cout << csum[2] << endl;

    solve();
}
