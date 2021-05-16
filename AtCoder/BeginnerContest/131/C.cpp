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

ll ans, A,B,C,D;

ll GCD(ll a, ll b){
    if(b==0) return a;

    return GCD(b, a % b);
}

ll LCM(ll a, ll b){
    ll ans;

    if(a > b) ans = (a / GCD(a, b)) * b;
    else ans = (b / GCD(a, b)) * a;

    return ans;
}

ll calc_num(ll K) {
    return K - (K / C) - (K / D) + (K / LCM(C, D));
}

void solve(){
    ans = calc_num(B) - calc_num(A-1);

    cout << ans << endl;
}

int main(){
    cin >> A >> B >> C >> D;

    solve();
}
