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

ll N, ans = 0;
vll L;

void solve(){
    rep(i,N){
        if(i%2!=0)
            ans += L[i];
    }

    cout << ans << endl;
}

int main(){
    cin >> N;
    N *= 2;
    L.resize(N,0);
    rep(i,N) cin >> L[i];

    sort(L.begin(), L.end());
    reverse(L.begin(), L.end());

    solve();
}
