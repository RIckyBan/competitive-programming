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

unsigned long ans, H, W;

void solve(){
    if(H == 1 || W == 1){
        ans = 1;
    } else if (W % 2 == 0 || H % 2 == 0){
        ans = W * H / 2;
    } else {
        ans = W * (H-1) / 2;
        ans += (W+1) / 2;
    }

    cout << ans << endl;
}

int main(){
    cin >> H >> W;

    solve();
}
