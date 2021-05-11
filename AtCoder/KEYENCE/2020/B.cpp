#include <iostream>
#include <cmath>
#include <vector>
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
vi X, L;

void solve(){
    int cur = -1 * INF, idx;
    vector<pii> tmp;

    rep(i, N) {
        tmp.push_back(pii(X[i] + L[i], i));
    }
    sort(tmp.begin(), tmp.end());

    for(auto v : tmp) {
        idx = v.second;
        // cout << idx << " " << v.first << endl;
        if(X[idx] - L[idx] < cur) continue;
        cur = v.first;
        ans++;
    }

    cout << ans << endl;
}

int main(){
    cin >> N;
    X.resize(N), L.resize(N);

    rep(i, N) {
        cin >> X[i] >> L[i];
    }

    solve();
}
