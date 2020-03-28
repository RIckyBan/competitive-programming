#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll K, N;
vi A, diff;

void solve(){
    diff.resize(N);

    rep(i, N-1){
        diff[i] = A[i+1] - A[i];
    }

    diff[N-1] = A[0] + K - A[N-1];

    sort(diff.begin(), diff.end());

    cout << K - diff[N-1] << endl;
}

int main(){
    cin >> K >> N;
    A.resize(N);

    rep(i, N){
        cin >> A[i];
    }

    solve();
}
