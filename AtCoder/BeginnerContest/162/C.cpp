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

ll ans = 0;
int K;

ll GCD(ll a, ll b){
    if(b==0) return a;

    return GCD(b, a % b);
}

void solve(){
    rep(i, K){
        rep(j, K){
            rep(k, K){
                ans += GCD(i+1, GCD(j+1, k+1));
            }
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> K;

    solve();
}
