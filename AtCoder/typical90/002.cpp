#include <iostream>
#include <cmath>
#include <bitset>
#include <vector>
#include <set>
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

vector<string> ans;
int N;

string print_bit(int bit){
  string res = "";

  rep(j, N) {
    if(bit & 1<<j) {
      res += "(";
    } else {
      res += ")";
    }
  }

  return res;
}

void solve(){
  if(N % 2 != 0) return;

  for(int bit = 0; bit < 1<<N; bit++) {
    int k = 0;
    rep(j, N) {
      if(bit & 1<<j) {
        k += 1;
      } else {
        k -= 1;
      }
      if(k < 0) break;
    }
    if(k == 0) ans.push_back(print_bit(bit));
  }

  sort(ans.begin(), ans.end());
  for(auto v : ans) {
    cout << v << endl;
  }
}

int main(){
    cin >> N;

    solve();
}
