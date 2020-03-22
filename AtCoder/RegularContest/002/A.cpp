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
int Y;
bool a, b, c, flag = false;

void solve(){
    a = Y % 4 == 0;
    b = Y % 100 == 0;
    c = Y % 400 == 0;

    if(a) flag = true;
    if(b) flag = false;
    if(c) flag = true;

    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main(){
    cin >> Y;

    solve();
}
