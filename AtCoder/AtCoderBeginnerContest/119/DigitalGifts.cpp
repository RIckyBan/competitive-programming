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

ll N;
double xs[50], ans = 0.0;
string us[50];

void solve(){
    rep(i,N){
        if(us[i] == "BTC")
            xs[i] *= 380000.0;

        ans += xs[i];
    }

    cout << ans << endl;
}

int main(){
    cin >> N;

    rep(i,N){
        cin >> xs[i] >> us[i];
    }

    solve();
}
