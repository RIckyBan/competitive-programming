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
string S[MAXN];
map<char, ll> cnt;

#include <functional>

#include <iostream>

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f)
{
    if (rest == 0)
    {
        f(indexes);
    }
    else
    {
        if (s < 0)
            return;
        recursive_comb(indexes, s - 1, rest, f);
        indexes[rest - 1] = s;
        recursive_comb(indexes, s - 1, rest - 1, f);
    }
}

// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k, std::function<void(int *)> f)
{
    int indexes[k];
    recursive_comb(indexes, n - 1, k, f);
}

void solve()
{
    int key = 0;
    string S = "";
    for (auto itr = cnt.begin(); itr != cnt.end(); ++itr)
    {
        key++;
        S += itr->first;
    }

    if (key >= 3)
    {
        foreach_comb(key, 3, [&](int *indexes)
                     { 
                        //  cout << indexes[0] << " " << indexes[1] << " " << indexes[2] << endl;
                     ans += cnt[S[indexes[0]]] * cnt[S[indexes[1]]] * cnt[S[indexes[2]]]; });
    }

    cout << ans << endl;
}

bool is_march(char c)
{
    return c == 'M' || c == 'A' || c == 'R' || c == 'C' || c == 'H';
}

int main()
{
    cin >> N;
    rep(i, N)
    {
        cin >> S[i];
        if (is_march(S[i][0]))
        {
            cnt[S[i][0]]++;
        }
    }
    solve();
}
