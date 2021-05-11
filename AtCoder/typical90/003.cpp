#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
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
int N;
vi M[MAXN+5] = {};
bool flag[MAXN+5] = {};
stack<pii> st;

int dfs(int s) {
  int id;
  flag[s] = true;
  st.push(pii(s, 0));

  while(!st.empty()) {
    pii tmp = st.top();
    st.pop();

    for(auto v: M[tmp.first]) {
      if(!flag[v]) {
        flag[v] = true;
        st.push(pii(v, tmp.second + 1));
        if(ans < tmp.second + 1) {
          ans = tmp.second + 1;
          id = v;
        }
      }
    }
  }

  return id;
}

void solve(){
  int res = dfs(1);
  // cout << res << ":" << ans + 1 << endl;
  rep(i, N+1) flag[i] = false;
  res = dfs(res);
  // cout << res << ":" << ans + 1 << endl;
  cout << ans + 1 << endl;
}

int main(){
    int A, B;
    cin >> N;

    rep(i, N) {
      cin >> A >> B;

      M[A].push_back(B);
      M[B].push_back(A);
    }

    solve();
}
