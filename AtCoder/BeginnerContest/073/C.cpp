#include <iostream>
#include <cmath>
#include <vector>
#include <map>
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
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans = 0;
vi A;
int N;
map<int, int> mp;

void solve(){
    rep(i, N){
        mp[A[i]]++;
    }

    for(auto itr= mp.begin(); itr!= mp.end(); ++itr){
        if(itr->second % 2 == 1) ans++;
    }

    cout << ans << endl;
}

int main(){
    cin >> N;
    A.resize(N);

    rep(i, N) cin >> A[i];

    solve();
}
