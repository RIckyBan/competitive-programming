#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N, A[3][105], ans, buff = 0;

void solve(){
    rep(i,N-2){
        buff = buff + A[0][i+1] - A[1][i];
        ans = max(ans, buff);
    }
    cout << ans << endl;
}

int main(){
    cin >> N;
    rep(i,N) cin >> A[0][i];
    
    rep(i,N){ 
        cin >> A[1][i];
        buff += A[1][i];
    }

    buff += A[0][0];
    ans = buff;

    solve();
}
