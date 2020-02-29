#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N;
ll ans=0;
vll a,s;
map<ll, ll> mp;

void solve(){
    for(auto itr=mp.begin(); itr != mp.end(); itr++){
        ll num = itr->second;
        ans += num * (num-1)/2;
    }

    cout << ans << endl;
}

int main(){
    cin >> N;
    
    a.resize(N), s.resize(N+1,0);
    
    rep(i,N)
        cin >> a[i];

    rep(i,N){
        s[i+1] = a[i] + s[i];
    }

    rep(i,N+1) mp[s[i]]++;

    solve();
}
