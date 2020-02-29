#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <map>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

string S,ans;

map<char, char> cvt;

void solve(){
    string c = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string m = "DEFGHIJKLMNOPQRSTUVWXYZABC";

    rep(i, m.size())
        cvt[m[i]] = c[i];

    rep(i, S.size())
        ans.push_back(cvt[S[i]]);

    cout << ans << endl;
}

int main(){
    cin >> S;

    solve();
}
