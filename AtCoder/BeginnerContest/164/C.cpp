#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans = 0;
int N;
vector<string> S;

map<string, int> mp;

void solve(){
    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        ans++;
    }
    cout << ans << endl;
}

int main(){
    cin >> N;

    S.resize(N);

    rep(i, N) {
        cin >> S[i];
        mp[S[i]]++;
    }

    solve();
}
