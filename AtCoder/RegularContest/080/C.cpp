#include <iostream>
#include <cmath>
#include <vector>
#include <map>
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

ll N;
vll A;
bool flag = false;
map<ll, ll> mp;

void solve(){
    rep(i,N){
        mp[A[i]]++;
    }

    if(2*mp[0] + 1 >= N) {
        flag = true;
    } else {
        N -= 2*mp[0];

        if(mp[2] == N || mp[2] == N + 1) flag = true;
    }

    if(flag){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main(){
    cin >> N;
    A.resize(N);

    rep(i, N) cin >> A[i];

    rep(i, N) A[i] %= 4;

    solve();
}
