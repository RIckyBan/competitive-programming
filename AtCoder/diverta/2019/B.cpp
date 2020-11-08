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

ll ans = 0;
int R,G,B,N,b,tmp;

void solve(){
    int r_max = (N+R-1) / R;
    int g_max = (N+G-1) / G;

    rep(r, r_max+1) {
        rep(g, g_max+1) {
            tmp = N - r*R - g*G;
            if(tmp >= 0 && tmp % B == 0){
                ans++;
                b = tmp / B;
                // cout << r << " " << g << " " << b << endl;
            }
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> R >> G >> B >> N;

    solve();
}
