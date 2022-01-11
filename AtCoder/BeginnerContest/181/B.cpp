#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define pii pair<int, int>

ll ans = 0;
ll N;
vll A, B;

void solve()
{
    rep(i, N)
    {
        ans += (A[i] + B[i]) * (B[i] - A[i] + 1) / 2;
    }
    cout << ans << endl;
}

int main()
{
    cin >> N;
    A.resize(N);
    B.resize(N);

    rep(i, N)
    {
        cin >> A[i] >> B[i];
    }

    solve();
}
