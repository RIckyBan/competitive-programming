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

string S[3];

void solve(){
    cout << S[0][0] << S[1][1] << S[2][2] << endl;
}

int main(){
    rep(i,3)
        cin >> S[i];

    solve();
}
