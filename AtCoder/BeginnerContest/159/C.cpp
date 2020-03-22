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
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

float a, b, c, L, ans;


void solve(){
    a = L/3;
    b = L/3;
    c = L/3;
    ans = a * b * c;
    cout << setprecision(17)  << ans << endl;
}

int main(){
    cin >> L;

    solve();
}
