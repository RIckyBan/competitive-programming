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

bool ans = true;
ll N;
vi A, B;
vector<pii> vec;

void solve()
{
    rep(i, N)
    {
        vec.push_back(make_pair(B[i], A[i]));
    }
    sort(vec.begin(), vec.end());

    ll sum = 0;
    rep(i, N)
    {
        sum += vec[i].second;
        if (sum > vec[i].first)
        {
            ans = false;
            break;
        }
    }

    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    cin >> N;
    A.resize(N);
    B.resize(N);

    rep(i, N)
    {
        cin >> A[i] >> B[i];
    }

    solve();
}
