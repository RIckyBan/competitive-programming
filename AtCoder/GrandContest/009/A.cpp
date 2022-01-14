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

ll k = 0;
ll N;
vll A, B;

void solve()
{
    for (int i = N - 1; i >= 0; i--)
    {
        A[i] += k;
        A[i] %= B[i];

        if (A[i] > 0)
        {
            k += B[i] - A[i];
        }
    }

    cout << k << endl;
}

int main()
{
    cin >> N;
    A.resize(N);
    B.resize(N);

    rep(i, N)
    {
        cin >> A[i] >> B[i];
        A[i] %= B[i];
    }

    solve();
}
