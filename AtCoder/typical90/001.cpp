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
int N, L, K;
vi A;

bool can_solve(int th) {
  int cnt = 0, pre = 0;

  rep(i, N) {
    if(A[i] - pre >= th && L - A[i] >= th){
      cnt++;
      pre = A[i];
    }
  }

  if(cnt >= K) return true;
  else return false;
}

void solve(){
  ll left = -1, right = L+1;

  while(right - left > 1) {
    ll mid = (left + right) / 2;
    if(can_solve(mid) == false) right = mid;
    else left = mid;
  }

  cout << left << endl;
}

int main(){
    cin >> N >> L >> K;
    A.resize(N);
    rep(i, N) cin >> A[i];

    solve();
}
