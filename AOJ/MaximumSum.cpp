// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0516

#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N,K;
vi a, s;

void solve(){
    int ans = 0;
    rep(i,N)
        s[i+1] = s[i]+a[i];
    
    for(int i = 0; i < N+1-K; i++)
        ans = max(ans, s[i+K] - s[i]);
    
    cout << ans << endl;
}

int main(){
    while(cin >> N >> K && K){
        a.resize(N,0);
        s.resize(N+1,0);

        rep(i,N)  cin >> a[i];
        
        solve();
    }
}
