#include <iostream>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <algorithm>

using namespace std;

#define INF 1e15
#define MAXN 100005
#define MAXM 100005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans, k = 0, tmp;
int X;
vi A;
set<ll> st;
map<ll, ll> mp;

void solve(){
    while(true){
        tmp = k * k * k * k * k;
        if(tmp > X+INF) break;
        st.insert(tmp);
        mp[k] = tmp;
        k++;
    }

    // cout << k << endl;

    rep(j, k+1){
        for(int i = j; i <= k; ++i){
            // cout << mp[i] << " " << mp[j] << endl;
            if(mp[i] + mp[j] == X){
                cout << i << " " << -j << endl;
                return;
            }


            if(mp[i] - mp[j] == X){
                cout << i << " " << j << endl;
                return;
            }
        }
    }
}

int main(){
    cin >> X;

    solve();
}
