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

ll ans = 0, N, P;
vll A;

// nCk
ll combi(ll n, ll k)
{
    ll ret = 1;
    for (ll i = 1; i <= k; ++i)
    {
        ret *= n - i + 1;
        ret /= i;
    }
    return ret;
}

void solve()
{
    // cout << A[0] << endl;
    // cout << A[1] << endl;

    ll odd = 0, even = 0;

    if (P == 0)
    {
        for (ll k = 0; k <= A[0]; k++)
        {
            even += combi(A[0], k);
        }

        for (ll k = 0; k <= A[1]; k += 2)
        {
            odd += combi(A[1], k);
        }
    }
    else
    {
        for (ll k = 1; k <= A[1]; k += 2)
        {
            odd += combi(A[1], k);
        }

        if (odd > 0)
        {
            for (ll k = 0; k <= A[0]; k++)
            {
                even += combi(A[0], k);
            }
        }
    }

    ans = odd * even;
    cout << ans << endl;
}

int main()
{
    cin >> N >> P;
    A.resize(2);
    rep(i, N)
    {
        ll a;
        cin >> a;
        A[a % 2] += 1;
    }

    solve();
}
