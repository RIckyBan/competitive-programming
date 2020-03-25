#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>
#include <bitset>

#define SIZE 100
using namespace std;
using ll = long long int;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> light(m);
    vector<int> cond(m);

    for (size_t i = 0; i < m; i++)
    {
        int ki;
        cin >> ki;
        for (size_t _ = 0; _ < ki; _++)
        {
            int s;
            cin >> s;
            light[i].push_back(s);
        }
    }

    for (size_t i = 0; i < m; i++)
    {
        cin >> cond[i];
    }

    ll ans = 0;
    for (size_t i = 0; i < (1 << n); i++)
    {
        bitset<10> mask = i;
        vector<int> on(m);

        for (int j = 0; j < m; j++)
        {
            for (auto &&e : light[j])
            {
                if (mask[e-1])
                {
                    on[j]++;
                }
            }
        }
        bool ok = true;
        for (size_t j = 0; j < m; j++)
        {
            if (on[j] % 2 != cond[j])
            {
                ok = false;
            }
        }
        if (ok)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
