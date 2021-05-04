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

ll ans = 0;
int N, cnt = 0, minA = INF;
vi A;

void solve(){
  if(cnt % 2 == 0) cout << ans << endl;
  else {
    cout << ans - minA * 2 << endl;
  }
}

int main(){
  cin >> N;
  A.resize(N);
  rep(i, N) {
    cin >> A[i];
    if(A[i] <= 0) cnt++;
    minA = min(minA, abs(A[i]));
    ans += abs(A[i]);
  }

  solve();
}
