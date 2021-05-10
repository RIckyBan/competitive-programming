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

ll ans = 1;
int N;
vi A;
vector<ll> diff;

void solve(){
    ll tmp, K;
    for(int i = 1; i < N; ++i) {
        tmp = A[i] - A[i-1];
        if(tmp != 0) diff.push_back(tmp);
    }

    K = diff.size();

    for(int i = 1; i < K; ++i) {
        if(diff[i - 1] * diff[i] < 0) {
            i++;
            ans++;
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> N;
    A.resize(N);

    rep(i, N) {
        cin >> A[i];
    }

    solve();
}
