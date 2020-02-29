#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N, M, C, A[25][25], B[25], cnt = 0;

int calc(int i){
    int ans = 0;
    
    rep(j,M) ans += B[j] * A[i][j];

    return ans + C;
}


void solve(){
    rep(i,N) if(calc(i) > 0) cnt++;

    cout << cnt << endl;
}

int main(){
    cin >> N >> M >> C;

    rep(i,M) cin >> B[i];

    rep(i,N) rep(j,M) cin >> A[i][j];

    solve();
}
