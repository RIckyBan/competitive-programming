#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N,K;
ll ans=0,sur=0;
vi A;

void solve(){
    sort(A.begin(),A.end());

    rep(i,K){
        ans += A[i];
        ans += sur;
        sur++;
    }
        
    cout << ans << endl;
}

int main(){
    cin >> N >> K;

    A.resize(N,0);
    rep(i,N) cin >> A[i];

    solve();
}
