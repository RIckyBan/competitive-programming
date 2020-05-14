#include <iostream>
#include <cmath>
#include <vector>
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

int ans = INF, N;
vi T;

void solve(){
    for(int i = 0; i < (1 << N); i++) {
        int R = 0, L = 0;
		
        for(int j = 0; j < N; j++) {
			if (i & (1 << j)) R += T[j];
            else L += T[j];
		}

        // cout << L << " " << R << endl;

        ans = min(ans, max(L, R));
	}
    cout << ans << endl;
}

int main(){
    cin >> N;
    T.resize(15, 0);

    rep(i, N) cin >> T[i];

    solve();
}
