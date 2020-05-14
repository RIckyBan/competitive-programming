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
int L, R;
map<int, int> mp;
vi l, r;

void solve(){
    rep(i, R){
        if(mp[r[i]] > 0) {
            ans++;
            mp[r[i]]--;
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> L >> R;
    l.resize(L), r.resize(R);

    rep(i, L) {
        cin >> l[i];
        mp[l[i]]++;
    }
    rep(i, R) cin >> r[i];

    solve();
}
