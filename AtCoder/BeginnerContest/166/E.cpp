#include <iostream>
#include <cmath>
#include <vector>
#include <map>
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
vi A;
map<ll, ll> mp;

void solve(){
    rep(i, N){
        mp[A[i]+i]++;
    }

    rep(i, N){
        if(i - A[i] <= 0) continue;
        else {
            ans += mp[i-A[i]];
        }
    }

    cout << ans << endl;
}

int main(){
    cin >>N;
    A.resize(N);
    rep(i, N) cin >> A[i];

    solve();
}
