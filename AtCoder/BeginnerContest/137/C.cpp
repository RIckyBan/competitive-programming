#include <iostream>
#include <cmath>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int N;
ll ans = 0;
string st[MAXN];
map<string, int> mp;

ll Combi(int a){
    return (ll)a*(a-1)/2;
}

void solve(){
    rep(i, N){
        sort(st[i].begin(), st[i].end());
        mp[st[i]]++;
    }


    for (auto it=mp.begin(); it!=mp.end(); ++it)
        ans += Combi(it->second);

    cout << ans << endl;
}

int main(){
    cin >> N;

    rep(i, N){
        cin >> st[i];
    }

    solve();
}
