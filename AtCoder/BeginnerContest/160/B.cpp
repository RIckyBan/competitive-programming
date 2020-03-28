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

ll X, ans;


void solve(){
    ans += 1000 * (X/500);
    X %= 500;
    ans += 5 * (X/5);

    cout << ans << endl;
}

int main(){
    cin >> X;

    solve();
}
