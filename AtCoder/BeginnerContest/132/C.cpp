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
ll N, k;
vll A;
map<ll, ll> M;

void solve()
{
    k = N / 2;
    sort(A.begin(), A.end());

    for (auto itr = M.begin(); itr != M.end(); ++itr)
    {
        // std::cout << "key = " << itr->first             // キーを表示
        //           << ", val = " << itr->second << "\n"; // 値を表示
        k -= itr->second;

        if (k == 0)
        {
            ans = itr->first;
            ++itr;
            ans = itr->first - ans;
            break;
        }
        else if (k < 0)
        {
            break;
        }
    }
    cout << ans << endl;
}

int main()
{
    cin >> N;

    rep(i, N)
    {
        ll a;
        cin >> a;
        A.push_back(a);
        M[a]++;
    }

    solve();
}
