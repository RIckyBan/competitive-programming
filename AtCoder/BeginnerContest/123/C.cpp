#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll N, A[5], min_capacity = 	922337203685477580;
ll ans = 0;

void solve(){
    ans += 4;
    ans += (N + min_capacity -1) / min_capacity; //絶対に切り上げるという気持ち
    cout << ans << endl;
}

int main(){
    cin >> N;
    rep(i,5) {
        cin >> A[i];
        min_capacity = min(A[i], min_capacity);
    }

    solve();
}
