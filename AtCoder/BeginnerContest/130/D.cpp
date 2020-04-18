#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll cnt = 0, K;
int N;
vi A;
vector<ll> S;

void solve(){
    rep(i, N){
        auto itr = lower_bound(S.begin(), S.end(), K+S[i]);
        cnt += distance(itr, S.end());
    }
    cout << cnt <<  endl;
}

int main(){
    cin >> N >> K;
    A.resize(N);
    S.resize(N+1);

    S[0] = 0;

    rep(i, N) {
        cin >> A[i];
        S[i+1] = S[i] + A[i];
    }

    // rep(i, N+1) cout << S[i] << endl;

    solve();
}
