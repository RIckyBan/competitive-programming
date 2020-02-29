#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int X,T;

void solve(){
    cout << max(X - T,0) << endl;
}

int main(){
    cin >> X >> T;

    solve();
}
