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

string S, ans;
char hold = ' ';
int cnt=0;

void solve(){
    ans = "";
    hold = S[0];

    rep(i, S.size()){
        if(hold == S[i]) cnt++;
        else{
            ans.push_back(hold);
            ans += to_string(cnt);
            hold = S[i];
            cnt = 1;
        }
    }
    ans.push_back(hold);
    ans += to_string(cnt);

    cout << ans << endl;
}

int main(){
    cin >> S;

    solve();
}
