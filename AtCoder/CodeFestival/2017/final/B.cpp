#include <iostream>
#include <cmath>
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

ll ans;
string S;
bool flag = false;
map<char, int> mp;

void solve(){
    int k = S.size();
    rep(i, k) {
        mp[S[i]]++;
    }

    if(abs(mp['a'] - mp['b']) < 2 && abs(mp['b'] - mp['c']) < 2 &&  abs(mp['a'] - mp['c']) < 2) {
        flag = true;
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    cin >> S;

    solve();
}
