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

ll N,K, min_v = 1, pref, suff;
vll A;

void solve(){

    cout << (N-1 + (K-2)) / (K-1) << endl;
}

int main(){
    cin >> N >> K;
    A.resize(N,0);
    rep(i,N)
        cin >> A[i];

    solve();
}
