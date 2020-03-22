#include <iostream>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 200005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll N, A[MAXN], ans;
map<int, ll> mp;

void solve(){

    for(auto itr = mp.begin(); itr != mp.end(); ++itr){
        ans += itr->second*(itr->second - 1)/2;
    }

    rep(i, N){
            cout << ans - (mp[A[i]]-1)<< endl;
    }

}

int main(){
    cin >> N;

    rep(i, N){
        cin >> A[i];
        mp[A[i]]++;
    }

    solve();
}
