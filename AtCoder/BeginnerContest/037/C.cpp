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

int A[MAXN], N, K;
ll cumulativeSum[MAXN+1] = {}, ans = 0;

void solve(){
    rep(i, N-K+1){
        ans += cumulativeSum[K + i] - cumulativeSum[i];
    }

    cout << ans << endl;
}

int main(){
    cin >> N >> K;

    cumulativeSum[0] = 0;

    rep(i, N){
        cin >> A[i];
        cumulativeSum[i+1] = A[i] + cumulativeSum[i];
    }

    solve();
}
