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

ll N;
bool ans = false;
vi A[5] = {}, B;
vector<bool> flag[5] = {};

void solve(){
    rep(k, N) {
        rep(i, 3) {
            rep(j, 3) {
                if(A[i][j] == B[k]) {
                    flag[i][j] = true;
                }
            }
        }
    }

    rep(i, 3) {
        if(flag[i][0] && flag[i][1] && flag[i][2]) ans = true;
        if(flag[0][i] && flag[1][i] && flag[2][i]) ans = true;
    }

    if(flag[0][0] && flag[1][1] && flag[2][2]) ans = true;
    if(flag[0][2] && flag[1][1] && flag[2][0]) ans = true;

    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main(){
    rep(i, 3) {
        A[i].resize(3,0);
        flag[i].resize(3,false);
        rep(j, 3) {
            cin >> A[i][j];
        }
    }

    cin >> N;
    B.resize(N, 0);
    rep(i, N) {
        cin >> B[i];
    }

    solve();
}
