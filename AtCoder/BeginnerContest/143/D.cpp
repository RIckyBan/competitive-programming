#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans = 0;
int N, tmp;
vi pre, L;

void solve(){
    sort(L.begin(), L.end());

    rep(i, N){
        for(int j = i+1; j < N; ++j){
            // cout << i << " " << j << endl;
            // cout << L[i] << " and " << L[j] << endl;
            tmp = L[i] + L[j];

            auto itr = lower_bound(L.begin(), L.end(), tmp);
            ans += distance(L.begin(), itr) - 1 - j;
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> N;
    L.resize(N);

    rep(i, N) cin >> L[i];

    solve();
}
