#include <iostream>
#include <string>
typedef long long int ll;

using namespace std;
ll sum = 0;

void debug(ll print)
{
    cout << print << endl;
}

/**
 * @param n 現在までの値の合計
 * @param s まだ探索してない文字列
 */
void dfs(ll n, string s)
{
    if (s.size() == 0)
    {
        sum += n;
        return;
    }

    for (size_t i = 1; i <= s.size(); ++i)
    {
        // s == "125" の時、 m = 1, 12, 125
        ll m = stoll(s.substr(0, i));

        // 探索し終わった合計値を渡して、残りの文字列を探索
        dfs(n + m, s.substr(i, s.size() - 1));
    }
}

int main()
{
    string S;
    cin >> S;

#ifdef DEBUG
    debug();
#endif

    dfs(0, S);
    cout << sum << endl;
}
