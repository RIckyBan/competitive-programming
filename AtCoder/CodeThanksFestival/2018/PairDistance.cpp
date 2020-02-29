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

int N;
ll ans = 0;
vll X;

void solve(){

    for(int i = 1; i <= N;i++)
        ans += X[i-1]*(i - 1 - (N - i));

    cout << ans << endl;
    
}

int main(){
    cin >> N;

    X.resize(N);
    rep(i,N) cin >> X[i];

    sort(X.begin(),X.end());

    solve();
}
