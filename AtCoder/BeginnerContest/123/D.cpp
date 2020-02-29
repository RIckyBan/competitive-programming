#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int X, Y, Z, K;
vector<ll> A, B, C, AB, ABC;

void solve(){
    rep(i,X){
        rep(j,Y)
            AB.push_back(A[i]+B[j]);
    }

    sort(AB.begin(), AB.end());
    reverse(AB.begin(), AB.end());

    rep(i, min(K, X * Y)){
        rep(j,Z)
            ABC.push_back(AB[i]+C[j]);
    }

    sort(ABC.begin(), ABC.end());
    reverse(ABC.begin(), ABC.end());

    rep(i,K)
        cout << ABC[i] << endl;
}

int main(){
    cin >> X >> Y >> Z >> K;

    A.resize(X,0), B.resize(Y,0), C.resize(Z,0);

    rep(i,X) cin >> A[i];

    rep(i,Y) cin >> B[i];

    rep(i,Z) cin >> C[i];

    solve();
}
