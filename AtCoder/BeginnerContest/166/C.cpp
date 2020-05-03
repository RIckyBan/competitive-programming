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

ll ans = 0;
int N,M;
vi H, A, B, d[MAXN];

void solve(){
    rep(i, N){
        ans++;
        rep(j, d[i].size()){
            int id = d[i][j];

            if(H[i] <= H[id]){
                // cout << i << endl;
                ans--;
                break;
            }
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> N >> M;
    H.resize(N);
    A.resize(M);
    B.resize(M);

    rep(i, N) cin >> H[i];

    rep(i, M) {
        cin >> A[i] >> B[i];
        A[i]--, B[i]--;

        d[A[i]].push_back(B[i]);
        d[B[i]].push_back(A[i]);
    }

    solve();
}
