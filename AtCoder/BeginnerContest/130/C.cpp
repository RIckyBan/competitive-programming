#include <iostream>
#include <iomanip>
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

double area = 0;
int multi = 0;
ll W, H, X, Y;

void solve()
{
    area = W * H / 2.0;

    if (W % 2 == 0 && X == W / 2 && H % 2 == 0 && Y == H / 2)
    {
        multi = 1;
    }
    cout << fixed << setprecision(6) << area << " " << multi << endl;
}

int main()
{
    cin >> W >> H >> X >> Y;

    solve();
}
