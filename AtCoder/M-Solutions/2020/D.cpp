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

ll ans = 1000, N;
vll A, diff;

void solve(){
    rep(i, N-1){
        if(diff[i+1] > 0){
            ans += diff[i+1]* (ans / A[i]);
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> N;
    A.resize(N);
    diff.resize(N+1);

    rep(i, N) cin >> A[i];
    
    rep(i, N-1){
        diff[i+1] = A[i+1] - A[i];
    }

    solve();
}
