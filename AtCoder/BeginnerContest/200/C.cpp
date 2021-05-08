#include <iostream>
#include <cmath>
#include <vector>
#include <map>
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
vi A;
map<int, ll> mp;

void solve(){
    int tmp;
    rep(i, 200) {
        // cout << i << " "<< mp[i] << endl;
        ans += (mp[i] * (mp[i] - 1)) / 2;
    }
    cout << ans << endl;
}

int main(){
    cin >> N;
    A.resize(N);

    rep(i, N) {
        cin >> A[i];
        A[i] %= 200;
        mp[A[i]]++;
    }

    solve();
}
