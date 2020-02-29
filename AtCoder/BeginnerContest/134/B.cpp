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

ll N,D, ans = 0;

void solve(){
    ans = N / (D*2+1);
    if(N % (D*2+1) != 0)
        ans++;
    cout << ans << endl;
}

int main(){
    cin >> N >> D;

    solve();
}
