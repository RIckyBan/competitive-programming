#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int A, B, K, cnt=0, ans;

void solve(){
    for(int i = min(A,B); i > 0; i--){
        if(A % i == 0 && B % i == 0) cnt++;
        if(cnt == K) {
            ans = i;
            break;
            }
    }
    cout << ans << endl;
}

int main(){
    cin >> A >> B >> K;

    solve();
}
