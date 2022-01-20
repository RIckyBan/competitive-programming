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

ll ans = 1e14;
ll N;
vll A, cumA;

void solve()
{
    rep(i, N)
    {
        cumA[i + 1] = cumA[i] + A[i];
    }

    for (int i = 1; i < N; i++)
    {
        ans = min(ans, abs((cumA[N] - cumA[i]) - cumA[i]));
    }

    cout << ans << endl;
}

int main()
{
    cin >> N;

    A.resize(N);
    cumA.resize(N + 1);

    rep(i, N)
    {
        cin >> A[i];
    }

    solve();
}
