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

ll L, R;
int l, r, ans = INF;

void solve(){
    l = L%2019;
    r = R%2019;

    if(R-L>=2019){
        ans = 0;
    } else {
        if(r <= l) r += 2019;

        for(int i = l; i < r; ++i){
            for(int j = i+1; j <= r; ++j) {
                ans = min(ans, (i*j)%2019);
                // cout << i << " " << j << endl;
            }
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> L >> R;

    solve();
}
