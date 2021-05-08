#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 105
#define MAXM 100005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans;
int H, W, N;
vi A, nums;
int mp[MAXN][MAXN] = {};

void solve(){
  int tmp;
  rep(i, H) {
    rep(j, W) {
      tmp = nums.back();
      nums.pop_back();
      if(i % 2 == 0) {
        mp[i][j] = tmp;
      } else {
        mp[i][W - 1 - j] = tmp;
      }
    }
  }

  rep(i, H) {
    rep(j, W) {
      cout << mp[i][j];
      if(j == W - 1) cout << endl;
      else cout << " ";
    }
  }
}

int main(){
    cin >> H >> W >> N;
    
    A.resize(N);
    rep(i, N) {
      cin >> A[i];

      rep(j, A[i]) {
        nums.push_back(i+1);
        // cout << i + 1 << endl;
      } 
      }

    reverse(nums.begin(), nums.end());
    solve();
}
