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

double ans = 0;
int k = 1;
ll N;
vector<double> V;

void solve()
{
    sort(V.begin(), V.end());

    ans = (V[0] + V[1]) / 2;

    for (int i = 2; i < N; i++)
    {
        ans = (ans + V[i]) / 2;
    }

    cout << fixed << setprecision(5) << ans << endl;
}

int main()
{
    cin >> N;
    V.resize(N);
    rep(i, N) cin >> V[i];

    solve();
}
