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

int ans = 0, K,T;
vi A;

void solve(){
    int cur = A.size() - 1;
    cout << max(A[cur] - 1 - (K - A[cur]), 0) << endl;
}

int main(){
    cin >> K >> T;

    A.resize(T+1);
    A[0] = 0;
    rep(i, T) cin >> A[i+1];

    sort(A.begin(), A.end());

    solve();
}
