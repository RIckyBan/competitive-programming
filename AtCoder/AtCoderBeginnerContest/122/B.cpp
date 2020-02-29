#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

string S;
int cnt;

bool check(char w){
    string ACGT = "ACGT";
    rep(i,4)
        if(w == ACGT[i]) return true;
    return false;
}

void solve(){
    int cnt = 0, ans = 0;
    rep(i, S.size()){
        if(check(S[i])) cnt++;
        else{
            cnt = 0;
        }
        ans = max(cnt, ans);
    }
    cout << ans << endl;
}

int main(){
    cin >> S;

    solve();
}
