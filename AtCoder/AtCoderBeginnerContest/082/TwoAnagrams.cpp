#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

string s, t;

void solve(){
    if(s < ts) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main(){
    cin >> s >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    reverse(t.begin(), t.end());

    solve();
}
