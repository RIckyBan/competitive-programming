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
ll A, B, C;

void exchange()
{
    ll nA = (A + B) / 2;
    ll nB = (C + B) / 2;
    ll nC = (A + C) / 2;

    swap(A, nA);
    swap(B, nB);
    swap(C, nC);
}

void solve()
{
    if (A == B && B == C && A >= 2)
    {
        ans = -1;
    }
    else
    {
        while (A % 2 == 0 && B % 2 == 0 && C % 2 == 0)
        {
            ans++;
            exchange();
        }
    }

    cout << ans << endl;
}

int main()
{
    cin >> A >> B >> C;

    solve();
}
