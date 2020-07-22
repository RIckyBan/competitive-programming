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
int N, K;
vi A, nums;

void solve(){
    int cnt = 0;
    vi res;

    rep(i, N-1){
        if(A[i] < A[i+1]) cnt++;
        else {
            res.push_back(cnt);
            cnt = 0;
        }
    }

    if(cnt > 0) res.push_back(cnt);

    for(auto v: res){
        ans += max(0, v - (K - 1) + 1);
    }

    cout << ans << endl;
}

int main(){
    cin >> N >> K;
    A.resize(N);

    rep(i, N) cin >> A[i];

    solve();
}
