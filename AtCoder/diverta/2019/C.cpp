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
int N, cntBA = 0, cntB = 0, cntA = 0;
vector<string> S;

void solve(){
  rep(i, N) {
    int k = S[i].size();
    char h = S[i][0], e = S[i][k-1];
    if(h == 'B' && e == 'A') {
      cntBA++;
    } else if( h == 'B') {
      cntB++;
    } else if (e == 'A') {
      cntA++;
    }
  }

  if (cntBA >= 1) {
    ans += cntBA - 1;
    if(cntA > 0){
      ans++;
      cntA -= 1;
    }

    if(cntB > 0){
      ans++;
      cntB -= 1;
    }
  }

  int tmp = min(cntA, cntB);
  ans += tmp;


  cout << ans << endl;
}

int main(){
    cin >> N;
    S.resize(N);
    rep(i, N) {
      cin >> S[i];
      for(int j = 0; j < S[i].size()-1; ++j) {
        if(S[i][j] == 'A' && S[i][j+1] == 'B') ans++;
      }
    }

    solve();
}
