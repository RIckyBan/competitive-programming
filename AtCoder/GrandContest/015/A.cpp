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
ll N,A,B, diff;

void solve(){
  diff = B - A;

  if(diff < 0 or diff >= 1 && N == 1) {
    ans = 0;
  } else {
    N -= 2;
    ans = diff * N + 1;
  }

  cout << ans << endl;
}

int main(){
    cin >> N >> A >> B;

    solve();
}
