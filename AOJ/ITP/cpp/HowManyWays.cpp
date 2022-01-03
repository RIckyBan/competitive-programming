// https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/7/ITP1_7_B

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

int N, X;

void solve()
{
    ll ans = 0;
    int k;
    for (int i = 1; i <= N; i++)
    {
        for (int j = i + 1; j <= N; j++)
        {
            k = X - i - j;
            if (k > j && k <= N)
            {
                // cout << i << " " << j << " " << k << endl;
                ans++;
            }
        }
    }

    cout << ans << endl;
}

int main()
{
    while (true)
    {
        cin >> N >> X;
        if (N == 0 && X == 0)
            break;

        solve();
    }
}
