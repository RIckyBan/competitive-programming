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
ll X;

bool is_prime(ll N)
{
    if (N == 1)
        return false;

    for (ll i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
            return false;
    }

    return true;
}

void solve()
{

    if (X == 2)
    {
        cout << 2 << endl;
    }
    else
    {
        while (!is_prime(X))
        {
            X++;
        }
        cout << X << endl;
    }
}

int main()
{
    cin >> X;

    solve();
}
