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

int ans = 0;
int maxV = 0,N;
map<int,int> mp;
vi A;

void solve(){
    rep(i, maxV+1){
        ans = max(ans, mp[i-1]+mp[i]+mp[i+1]);
    }

    cout << ans << endl;
}

int main(){
    cin >> N;
    A.resize(N);
    rep(i, N) {
        cin >> A[i];
        mp[A[i]]++;
        maxV = max(maxV, A[i]);
    }

    solve();
}
