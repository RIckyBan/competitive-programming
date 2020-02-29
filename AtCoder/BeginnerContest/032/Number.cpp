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

ll A,B,N,ans;

void solve(){
    ans = N;
    for(int i = 1; ;i++){
        if(ans % A == 0 && ans % B == 0) break;
        ans++;
    }

    cout << ans << endl;
}

int main(){
    cin >> A >> B >> N;

    solve();
}
