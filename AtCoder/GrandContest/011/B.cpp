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
vll A, cumSum;
bool done = false;

void solve()
{
    sort(A.begin(), A.end());
    rep(i, N)
    {
        cumSum[i + 1] = cumSum[i] + A[i];
    }

    for (int i = 1; i < N; i++)
    {
        // cout << cumSum[i] << " " << A[i] << endl;
        if (cumSum[i] * 2 < A[i])
        {
            ans = i;
        }
        // else
        // {
        //     break;
        // }
    }

    cout << N - ans << endl;
}

int main()
{
    cin >> N;
    A.resize(N);
    cumSum.resize(N + 1);
    cumSum[0] = 0;

    rep(i, N)
    {
        cin >> A[i];
    }

    solve();
}
