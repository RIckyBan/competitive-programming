#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll N, Q, D[55][55]={}, S[55][55]={};
vll val;

void solve(){
    //累積和をとる
    rep(i,N){
        rep(j,N)
            S[i+1][j+1] = S[i][j+1] + S[i+1][j] - S[i][j] + D[i][j];
    }

    // rep(i,N){
    //     rep(j,N){
    //         cout << S[i+1][j+1] << " ";
    //         if(j==N-1) cout << endl;
    //     }
    // }

    val.resize(N*N+1,0);
    for(int x1 = 0; x1 < N; x1++){
        for(int x2 = x1+1; x2 <= N; x2++){
            for(int y1 = 0; y1 < N; y1++){
                for(int y2 = y1+1; y2 <= N; y2++){
                    ll area = (x2 - x1) * (y2 - y1);
                    ll sum = S[x2][y2] - S[x1][y2] - S[x2][y1] + S[x1][y1];
                    val[area] = max(sum, val[area]);
                }
            }
        }
    }

    rep(v, N*N)
        val[v+1] = max(val[v+1],val[v]);

    // rep(v, N*N+1)
    //     cout << val[v] << " ";
    // cout << endl;
}

int main(){
    cin >> N;
    rep(i,N){
        rep(j,N)
            cin >> D[i][j];
    }

    solve();

    cin >> Q;

    rep(q, Q){
        ll P; cin >> P;
        cout << val[P] << endl;
    }
}
