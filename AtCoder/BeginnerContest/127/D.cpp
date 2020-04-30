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
int N, M, cnt = 0, k;
vi A, B, C;

map<ll, int, greater<int>> mp;

void solve(){
    rep(i, N){
        mp[A[i]]++;
    }

    rep(i, M){
        if(mp.count(C[i])) mp[C[i]] += B[i];
        else mp[C[i]] = B[i];
    }

    for( auto i = mp.begin(); i != mp.end() ; ++i ) {
        if(cnt == N) break;
        k = min(N - cnt, i->second);
        ans += i->first*k;
        cnt += k;

        // std::cout << i->first << " " << i->second << "\n";
    }

    cout << ans << endl;
}

int main(){
    cin >> N >> M;
    A.resize(N);
    B.resize(M), C.resize(M);

    rep(i, N) cin >> A[i];

    rep(i, M) cin >> B[i] >> C[i];

    solve();
}
