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

ll N, P;

vector<pair<ll, ll>> prime_factorize(ll N)
{
    vector<pair<ll, ll>> res;

    ll i = 2;
    while (i * i <= N)
    {
        if (N % i == 0)
        {
            ll cnt = 0;
            while (N % i == 0)
            {
                N /= i;
                cnt++;
            }
            res.push_back({i, cnt});
        }
        i++;
    }

    if (N != 1)
        res.push_back({N, 1});

    return res;
}

void solve()
{
    vector<pair<ll, ll>> pf = prime_factorize(P);
    ll cnt = 1;
    for (auto &x : pf)
    {
        ll p = x.first;
        ll e = x.second;
        // cout << p << " " << e << endl;
        if (e / N >= 1)
        {
            cnt *= pow(p, floor(e / N));
        }
    }
    cout << cnt << endl;
}

int main()
{
    cin >> N >> P;

    if (N == 1)
        cout << P << endl;
    else if (P == 1)
        cout << 1 << endl;
    else
        solve();
}
