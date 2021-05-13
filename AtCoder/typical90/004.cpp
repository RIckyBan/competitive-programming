#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXH 2005
#define MAXM 2005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans;
int H, W;
vi A[MAXH] = {}, rSum, cSum;

void solve(){
    rSum.resize(H, 0);
    cSum.resize(W, 0);

    rep(i, H) {
        rep(j, W) rSum[i] += A[i][j]; 
    }

    rep(j, W) {
        rep(i, H) cSum[j] += A[i][j];
    }

    rep(i, H) {
        rep(j, W) {
            cout << rSum[i] + cSum[j] - A[i][j];
            if(j == W -1) cout << endl;
            else cout << " ";
        }
    }
}

int main(){
    cin >> H >> W;

    rep(i, H) {
        A[i].resize(W);
        rep(j, W) {
            cin >> A[i][j];
        }
    }

    solve();
}
