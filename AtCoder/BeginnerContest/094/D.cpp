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

ll ans1, ans2;
int N;
vi A;

void solve(){
    int cur;
    int tmp = INF;

    ans1 = A[N-1];
    A.pop_back();

    cur = ans1 / 2;
    // cout << cur << endl;

    for(auto v : A) {
        // cout << v << endl;
        if(tmp >= abs(cur - v)) {
            ans2 = v;
            tmp = abs(cur - v);
        }
    }
    cout << ans1 << " " << ans2 << endl;
}

int main(){
    cin >> N;
    A.resize(N);

    rep(i, N) cin >> A[i];

    sort(A.begin(), A.end());

    solve();
}
