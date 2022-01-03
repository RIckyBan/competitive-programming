#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int N;

int division_count(int n)
{
    int cnt = 0;

    for (int j = 1; j * j <= n; ++j)
    {
        if (n % j == 0)
        {
            cnt += 1;
            if (j != n / j)
            {
                cnt += 1;
            }
        }
    }

    return cnt;
}

int solve()
{
    int ans = 0;
    for (int i = 1; i <= N; i++)
        if (i % 2 == 1 && division_count(i) == 8)
            ans++;
    return ans;
}

int main()
{
    cin >> N;
    // printf("%d\n",division_count(N));
    cout << solve() << endl;
}
