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
vll P, diff;

void solve()
{
    rep(i, N)
    {
        if (P[i] == i + 1)
        {
            ans++;
            i++;
        }
    }

    cout << ans << endl;
}

int main()
{
    cin >> N;

    P.resize(N);
    diff.resize(N);

    rep(i, N)
    {
        cin >> P[i];
    }

    solve();
}
