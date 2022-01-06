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
#define rep(i, n) for (int i = 0, i##_len = (n); i < i##_len; ++i)
#define pii pair<int, int>

ll ans = 1e9;
ll A, B, C, X, Y, a, b, c;

ll calc_cost(int a, int b, int c)
{
    return a * A + b * B + c * C;
}

void solve()
{
    int maxAB = max(X, Y) * 2;
    for (int k = 0; k <= maxAB; k += 2)
    {
        c = k;
        a = max(X - k / 2, (ll)0);
        b = max(Y - k / 2, (ll)0);
        ans = min(ans, calc_cost(a, b, c));
    }

    cout << ans << endl;
}

int main()
{
    cin >> A >> B >> C >> X >> Y;

    solve();
}
