#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip> 

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define MOD 1000000007
#define PI 3.141592653589793
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int A,B,H,M;
double h = 0.5, m = 6.0, ans, diff;

void solve(){
    diff = (m - h) * (H*60+M);
    int tmp = diff / 360;
    diff -= 360*tmp;
    diff = min(diff, 360-diff);

    // cout << diff << endl;

    ans = A*A + B*B - 2 * A * B * cos(PI*diff/180);

    cout << setprecision(16) <<  sqrt(ans) << endl;
}

int main(){
    cin >> A >> B >> H >> M;

    solve();
}
