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
int N, M;
vi A[105];

// select k,l-th songs
ll calc_score(int k, int l)
{
	ll score = 0;
	rep(i, N)
	{
		score += max(A[i][k], A[i][l]);
	}
	return score;
}

void solve()
{
	for (int i = 0; i < M; i++)
	{
		for (int j = i + 1; j < M; j++)
		{
			ll score = calc_score(i, j);
			ans = max(ans, score);
		}
	}
	cout << ans << endl;
}

int main()
{
	cin >> N >> M;
	int a;
	rep(i, N)
	{
		rep(j, M)
		{
			cin >> a;
			A[i].push_back(a);
		}
	}

	solve();
}
