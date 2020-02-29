#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll N,M;

void solve(){
    ll ans;

    if(N == 1 && M == 1)
        ans = 1;
    else if(M == 1){
        ans = N-2;
    } else {
        ans = (N-2)*(M-2);
    }

    cout << ans << endl;
}

int main(){
    cin >> N >> M;

    if(N < M) swap(N,M);

    solve();
}
