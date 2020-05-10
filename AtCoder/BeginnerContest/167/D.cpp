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

ll ans, cnt = 0;
int N, offset = 0, period;
ll K;
vi A, dist, Res;
vector<bool> visited;

void solve(){
    visited.resize(N, false);
    Res.resize(N);

    int cur = 0;

    while(!visited[cur]){
        Res[cnt] = cur;
        visited[cur] = true;
        
        cur = dist[cur];
        cnt++;
    }

    // cout << cnt << endl;
    // cout << cur << endl;

    if(cur != 0){
        int tmp = 0;
        while(tmp != cur){
            tmp = dist[tmp];
            offset++;
        }
    }

    // cout << offset << endl;

    period = cnt - offset;

    if(K < offset){
        cout << Res[K] + 1 << endl;
    } else {
        K -= offset;

        ans = K % period;

        cout << Res[offset+ans]+1 << endl;
    }


}

int main(){
    cin >> N >> K;
    vi A;
    A.resize(N);
    dist.resize(N);

    rep(i, N) {
        cin >> A[i];
        A[i]--;
        dist[i] = A[i];
    }

    solve();
}
