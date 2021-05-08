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

ll res;
int N,K;

ll op(ll n) {
    if(n % 200 == 0) {
        return n / 200;
    } else {
        return n * 1000 + 200;
    }
}

void solve(){
    res = N;
    rep(i, K) {
        res = op(res);
        // cout << res << endl;
    }
    cout << res << endl;
}

int main(){
    cin >> N >> K;

    solve();
}
