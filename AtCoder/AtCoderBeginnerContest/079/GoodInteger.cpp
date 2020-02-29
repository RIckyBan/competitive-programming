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

string S;

void solve(){
    if(S[0] == S[1] && S[1]==S[2]) cout << "Yes" << endl;
    else if (S[1]==S[2] && S[2]==S[3]) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main(){
    cin >> S;

    solve();
}
