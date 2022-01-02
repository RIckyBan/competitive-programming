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

ll ans;
int N, K;
vi vec;

void solve()
{
    ans = 0;
    rep(i, N)
    {
        ans += min(vec[i], abs(K - vec[i])) * 2;
    }
    cout << ans << endl;
}

int main()
{
    cin >> N >> K;

    rep(i, N)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }

    solve();
}
