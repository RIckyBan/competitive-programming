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

ll ans = INF, tmp;
int N;
vi A;

void solve(){
    for(int m = -100; m <= 100; ++m){
        tmp = 0;
        rep(i, N) tmp += (m-A[i])*(m-A[i]);
        ans = min(ans, tmp);
    }
    cout << ans << endl;
}

int main(){
    cin >> N;
    A.resize(N);

    rep(i, N) cin >> A[i];

    solve();
}
