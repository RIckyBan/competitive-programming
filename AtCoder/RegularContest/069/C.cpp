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

ll N, M, ans = 0, k;

void solve(){
    k = min(N, M/2);

    ans += k;
    M -= 2*k;
    
    ans += M/4;
    
    cout << ans << endl;
}

int main(){
    cin >> N >> M;

    solve();
}
