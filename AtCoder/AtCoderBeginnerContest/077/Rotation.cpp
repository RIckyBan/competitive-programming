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

string S[2], ans;

bool solve(){

    rep(i,2)
        reverse(S[i].begin(), S[i].end());
    // cout << ans << endl;
    // cout << S[1]+S[0] << endl;
    if(ans == S[1]+S[0])
        return true;
    else
        return false;
}

int main(){
    cin >> S[0] >> S[1];
    
    ans = S[0]+S[1];

    if(solve())
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;
}
