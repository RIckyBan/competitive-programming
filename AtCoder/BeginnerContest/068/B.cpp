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

ll k = 1;
ll N;

void solve()
{
    while (true)
    {

        k *= 2;
        if (N / k == 0)
        {
            break;
        }
        // cout << N / k << endl;
    }
    cout << k / 2 << endl;
}

int main()
{
    cin >> N;

    solve();
}
