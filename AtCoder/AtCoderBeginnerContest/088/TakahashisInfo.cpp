#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int c[5][5], a[3], b[3], buff, min_v = 100;

bool check(){
    rep(i,3){
        rep(j,3)
            if(c[i][j] != a[i] + b[j]) return false;
    }
    return true;
}

void solve(){
    rep(i,3) rep(j,3) c[i][j] -= min_v;

    rep(i,3)
        a[i] = min(min(c[i][0], c[i][1]), c[i][2]);
    rep(j,3)
        b[j] = min(min(c[0][j], c[1][j]), c[2][j]);

    if(check()) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main(){
    rep(i,3){
        rep(j,3){
            cin >> buff;
            c[i][j] = buff;
            min_v = min(buff, min_v);
        }
    }
    solve();
}
