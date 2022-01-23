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
vll A;
vector<pii> pairs;

void solve()
{
    rep(i, N)
    {
        pairs[i] = pii(i, A[i]);
    }
    sort(pairs.begin(), pairs.end(), [](pii a, pii b)
         { return a.second < b.second; });

    rep(i, N)
    {
        cout << 1 + pairs[i].first;
        if (i != N - 1)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }
}

int main()
{
    cin >> N;
    A.resize(N);
    pairs.resize(N);

    rep(i, N)
    {
        cin >> A[i];
    }

    solve();
}
