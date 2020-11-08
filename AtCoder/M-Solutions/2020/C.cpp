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

ll ans, N, K;
vll A;

void solve(){
    for(int i = 0; i < N - K; i++){
        if(A[i] < A[i + K]){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}

int main(){
    cin >> N >> K;

    A.resize(N);
    rep(i, N) cin >> A[i];

    solve();
}
