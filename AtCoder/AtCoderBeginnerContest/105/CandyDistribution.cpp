#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll N,M,ans=0;
vll A, S;
map<ll, ll> cnt;

void solve(){
    S.resize(N+1,0);
    rep(i,N)
        S[i+1] = S[i] + A[i];

    rep(i,N+1)
        S[i] %= M;

    rep(i,N+1)
        cnt[S[i]]++;

    for(auto itr=cnt.begin(); itr!=cnt.end(); itr++)
        ans += itr->second * (itr->second -1) / 2;

    cout << ans << endl;
}

int main(){
    cin >> N >> M;
    A.resize(N,0);
    rep(i,N) cin >> A[i];

    solve();
}
