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

ll H,W;
vector<string> Cs;

void solve(){
    rep(i,Cs.size()){
        cout << Cs[i] << endl;
        cout << Cs[i] << endl;
    }
}

int main(){
    cin >> H >> W;
    Cs.resize(H);

    rep(i,H)
        cin >> Cs[i];

    solve();
}
