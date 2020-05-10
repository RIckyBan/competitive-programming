#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 15
#define MAXM 15
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans = INF;
int N,M,X;
vi C, A[MAXN];
bool flag;

bool checkAlgo(vi v){
    bool res = true;
    rep(i, M){
        if(v[i] < X){
            res = false;
            break;
        }
    }
    return res;
}

void solve(){
    
    for(int i = 0; i < (1 << N); i++) {
        vi U;
        U.resize(M, 0);
        ll tmp = 0;

		for(int j = 0; j < N; j++) {
			if (i & (1 << j)){
                tmp += C[j];
                rep(k, M){
                    U[k] += A[j][k];
                }
            }
		}

        if(checkAlgo(U)){
            flag = true;
            // cout << tmp << endl;
            ans = min(ans, tmp);
        }

	}
    

    if(flag) cout << ans << endl;
    else cout << -1 << endl;
}

int main(){
    cin >> N >> M >> X;
    C.resize(N);

    rep(i, N){
        A[i].resize(M);
        cin >> C[i];
        rep(j, M) cin >> A[i][j];
    }

    solve();
}
