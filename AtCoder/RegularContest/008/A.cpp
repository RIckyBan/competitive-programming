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

int ans;
int N, r, q;

void solve(){
    q = N / 10;
    r = N % 10;

    ans = q*100+r*15;

    q = (N+9)/10;
    ans = min(ans, 100*q);

    cout << ans << endl;
}

int main(){
    cin >> N;

    solve();
}
