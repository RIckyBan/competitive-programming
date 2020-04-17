#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 105
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

string ans = "";
int N,L;
vector<string> S;

void solve(){
    sort(S.begin(), S.end());

    rep(i, N) ans += S[i];

    cout << ans << endl;
}

int main(){
    cin >> N >> L;

    S.resize(N);

    rep(i, N) cin >> S[i];

    solve();
}
