#include <iostream>
#include <cmath>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll N;

bool check(ll n){
  int buff;
  map<int,int> mp;

  while(true){
    buff = n % 10;
    mp[buff]++;
    if(n < 10) break;
    n = n / 10;
  }
  if(mp[3] > 0 && mp[5] > 0 && mp[7] > 0)
    return true;
  else
    return false;
}

ll dfs(ll i){
  if(i > N) return 0;

  return check(i) + dfs(10*i+3) + dfs(10*i+5) + dfs(10*i+7);
}

void solve(){
    ll ans = dfs(0);

    cout << ans << endl;
}

int main(){
    cin >> N;

    solve();
}
