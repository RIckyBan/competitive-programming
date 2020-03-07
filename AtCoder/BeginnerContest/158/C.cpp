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

ll ans;
int A, B, l1, r1, l2, r2, l3, r3;

void solve(){
    l1 = ceil((float)(A) * 100 / 8);
    r1 =ceil(float(A+1) * 100 / 8)-1;
    // cout << l1 << " " << r1 << endl;
    l2 = floor(B * 10);
    r2 = (B+1) * 10 - 1;
    // cout << l2 << " " << r2 << endl;

    l3 = max(l1, l2);
    r3 = min(r1, r2);
    // cout << l3 << " " << r3 << endl;
    if(l3<=r3)
        cout << l3 << endl;
    else
        cout << -1 << endl;
    }

int main(){
    cin >> A >> B;

    solve();
}
