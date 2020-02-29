#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N;
char s[55][55];

void solve(){
    rep(i,N){
        for(int j = N - 1; j >= 0; j--){
            cout << s[j][i];
            if(j == 0) cout << endl;
        }
    }
}

int main(){
    cin >> N;

    rep(i,N) rep(j,N) cin >> s[i][j];

    solve();
}
