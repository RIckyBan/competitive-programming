#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int H,W;
char a[105][105];

void solve(){
    rep(i,H+2){
        rep(j,W+2){
            if(i == 0 || i == H+1 || j == 0 || j == W+1) cout << "#";
            else cout << a[i][j];
        }
        cout << endl;
    }
}

int main(){
    cin >> H >> W;

    rep(i,H){
        rep(j,W){
            cin >> a[i+1][j+1];
        }
    }

    solve();
}
