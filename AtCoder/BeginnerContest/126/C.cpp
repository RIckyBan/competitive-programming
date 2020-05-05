#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

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

double ans = 0;
int N, K;

void solve(){
    // rep(i, N+1) cout << Cnt[i] << endl;

    for(int i = 1; i <= N; ++i){
        ll tmp = N;
        int cur = i;
        while(cur < K){
            tmp *= 2;
            cur *= 2;
        }
        // cout << tmp << endl;
        ans += 1/(double)tmp;
    }

    cout << setprecision(15) <<  ans << endl;
}

int main(){
    cin >> N >> K;

    solve();
}
