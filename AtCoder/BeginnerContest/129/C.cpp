#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

vi ans;
int N,M, tmp;

void solve(){
    for( int i = 2; i <= N; ++i){
        if(ans[i] != 0){
            ans[i] = ans[i-1] + ans[i-2];
            ans[i] %= MOD;
        } 
    }

    // rep(i, N+1)
    cout << ans[N] << endl;
}

int main(){
    cin >> N >> M;

    ans.resize(N+1);

    fill(ans.begin(), ans.end(), -1);

    ans[0] = 1;
    ans[1] = 1;

    rep(i,M){
        cin >> tmp;
        ans[tmp] = 0;
    }

    // rep(i, N+1)
    //     cout << ans[i] << endl;

    // cout << endl;

    solve();
}
