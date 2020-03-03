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

int N, A[MAXN+1], dp[MAXN+1] = {};

void solve(){
    for(int i=2; i <=N; ++i){
        dp[i] = min(dp[i-1]+abs(A[i]-A[i-1]), dp[i-2]+abs(A[i]-A[i-2]));
    }
    cout << dp[N] << endl;
}

int main(){
    cin >> N;

    rep(i, N){
        cin >> A[i+1];
    }
    A[0] = A[1];

    solve();
}
