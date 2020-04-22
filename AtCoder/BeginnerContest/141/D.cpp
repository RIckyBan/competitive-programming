#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <algorithm>

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
int N, M, tmp;

priority_queue<int> Q;

void solve(){
    rep(i, M){
        tmp = Q.top();
        tmp /= 2;
        Q.pop();
        Q.push(tmp);
    }

    while (!Q.empty()) {
        ans += Q.top();
        Q.pop();
    }

    cout << ans << endl;
}

int main(){
    cin >> N >> M;

    rep(i, N) {
        cin >> tmp;
        Q.push(tmp);
    }

    solve();
}
