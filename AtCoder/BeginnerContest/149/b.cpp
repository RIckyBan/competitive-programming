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

ll A, B, A_, B_, K;

void solve(){
    A_ = max(0ll, A-K);
    K -= min(A,K);
    B_ = max(0ll, B - K);

    cout << A_ << " " << B_ << endl;
}

int main(){
    cin >> A >> B >> K;

    solve();
}
