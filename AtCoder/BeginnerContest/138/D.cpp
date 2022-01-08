#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

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
ll N, Q, a, b, p, x;
vll P, X, scores, parent;
vector<bool> done;
vector<vll> vec;

void solve()
{
    rep(i, Q)
    {
        scores[P[i]] += X[i];
    }

    queue<ll> nodes;
    nodes.push(1);
    done[1] = true;
    while (nodes.size())
    {
        ll node = nodes.front();
        done[node] = true;
        // cout << node << endl;
        nodes.pop();

        rep(i, vec[node].size())
        {
            ll next = vec[node][i];
            if (!done[next])
            {
                scores[next] += scores[node];
                nodes.push(next);
            }
        }
    }

    for (int i = 1; i <= N; i++)
    {
        cout << scores[i];
        if (i != N)
        {
            cout << " ";
        }
        else
        {
            cout << endl;
        }
    }

    // cout << "parent vec" << endl;
    // for (int i = 1; i <= N; i++)
    // {
    //     cout << vec[i] << endl;
    // }
}

int main()
{
    cin >> N >> Q;
    vec.resize(N + 1);
    done.resize(N + 1);
    parent.resize(N + 1, -1);
    scores.resize(N + 1);
    X.resize(Q);
    P.resize(Q);

    parent[1] = 0;

    for (int i = 0; i < N - 1; i++)
    {
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    rep(i, Q)
    {
        cin >> p >> x;
        P[i] = p;
        X[i] = x;
    }

    solve();
}
