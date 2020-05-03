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
int N,K;
vi d, cnt;

void solve(){
    rep(i, N){
        if(cnt[i+1] == 0) ans++;
    }
    cout << ans << endl;
}

int main(){
    cin >> N >> K;
    d.resize(K);
    cnt.resize(N+1, 0);

    rep(i, K){
        cin >> d[i];
        vi A;
        A.resize(d[i]);

        rep(j, d[i]) {
            cin >> A[j];
            cnt[A[j]]++;
        }
    }

    solve();
}
