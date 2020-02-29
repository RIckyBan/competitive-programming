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

string S;
int cnt=0;

void solve(){
    rep(i,S.size()-1)
        if(S[i]!= S[i+1]) cnt++;
    
    cout << cnt << endl;
}

int main(){
    cin >> S;

    solve();
}
