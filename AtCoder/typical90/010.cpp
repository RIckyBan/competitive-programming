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

ll ans;
vi C, P, L, R, sumC1, sumC2;
int N,Q;

void solve(){
    rep(i, Q){
        cout << sumC1[R[i]] - sumC1[L[i]-1] << " " <<  sumC2[R[i]] - sumC2[L[i]-1] << endl;
    }
}

int main(){
    cin >> N;
    C.resize(N), P.resize(N);
    sumC1.resize(N+1), sumC2.resize(N+1);
    sumC1[0] = 0, sumC2[0] = 0;

    rep(i, N) {
        cin >> C[i] >> P[i];
        if(C[i] == 1) {
            sumC1[i+1] = sumC1[i] + P[i];
            sumC2[i+1] = sumC2[i];
        }
        else {
            sumC1[i+1] = sumC1[i];
            sumC2[i+1] = sumC2[i] + P[i];
        }
    }

    cin >> Q;
    L.resize(Q), R.resize(Q);
    rep(i, Q) cin >> L[i] >> R[i];

    solve();
}
