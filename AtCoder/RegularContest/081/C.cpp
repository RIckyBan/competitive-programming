#include <iostream>
#include <cmath>
#include <map>
#include <vector>
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
vector<ll> A, ans;
map<int, int> mp;

void solve(){
    rep(i, N){
        mp[A[i]]++;
    }

    for(auto itr=mp.begin(); itr!=mp.end(); ++itr){
        if(itr->second >= 4) ans.push_back(itr->first);
        if(itr->second >= 2) ans.push_back(itr->first);
    }

    if(ans.size() < 2){
        cout << 0 << endl;
    } else {
        sort(ans.begin(), ans.end());
        reverse(ans.begin(), ans.end());

        cout << ans[0] * ans[1] << endl;
    }
}

int main(){
    cin >> N;

    A.resize(N);

    rep(i, N) cin >> A[i];

    solve();
}
