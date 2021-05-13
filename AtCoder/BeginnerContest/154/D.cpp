#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

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

int N, K;
ll ans, tmp = 0;
vll P;

void solve(){
  rep(i, K) tmp += P[i];

  ans = tmp;
  
  for(int i = K; i < N; ++i) {
    // cout << tmp << " " << V[i] << " " <<  V[i-K] << endl;
    tmp = tmp + P[i] - P[i-K];
    ans = max(ans, tmp);
  }

  cout << fixed << setprecision(10) << (double)(ans) / 2.0 << endl;
}

int main(){
    cin >> N >> K;
    P.resize(N);
    rep(i, N) cin >> P[i], P[i]++;

    solve();
}
