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

ll ans = 0;
ll N;
string S;

bool is_valid_pin(string pin)
{
    int digit = 0;
    rep(i, N)
    {
        if (pin[digit] == S[i])
        {
            digit++;
            if (digit == 3)
            {
                return true;
            }
        }
    }
    return false;
}

void solve()
{
    rep(i, 10)
    {
        rep(j, 10)
        {
            rep(k, 10)
            {
                string tmp = to_string(i) + to_string(j) + to_string(k);
                if (is_valid_pin(tmp))
                {
                    // cout << tmp << endl;
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}

int main()
{
    cin >> N >> S;

    solve();
}
