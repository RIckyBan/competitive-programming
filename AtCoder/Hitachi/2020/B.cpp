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


int ans, A,B,M, a[MAXM], amin = MAXM,  b[MAXM], bmin = MAXM, x[MAXM], y[MAXM], c[MAXM];

void solve(){
    ans = amin + bmin;

    rep(i, M){
        ans = min(ans, a[x[i]-1]+b[y[i]-1] - c[i]);
    }
    
    cout << ans << endl;
}

int main(){
    cin >> A >> B >> M;

    rep(i, A){
        cin >> a[i];
        amin = min(amin, a[i]);
    }

    rep(i, B){
        cin >> b[i];
        bmin = min(bmin, b[i]);
    }

    // cout << amin << bmin << endl;

    rep(i, M){
        cin >> x[i] >> y[i] >> c[i];
    }

    solve();
}
