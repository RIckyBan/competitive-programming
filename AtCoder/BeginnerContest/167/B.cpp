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
int A,B,C,K;

void solve(){
    ans += 1*min(A, K);
    K -= A;

    K -= B;

    if(K > 0){
        ans -= min(C, K);
    }

    cout << ans << endl;
}

int main(){
    cin >> A >> B >> C >> K;

    solve();
}
