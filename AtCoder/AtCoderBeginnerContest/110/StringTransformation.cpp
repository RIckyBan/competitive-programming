#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

string S, T;
map<char, char> S_cnt,T_cnt;

void solve(){
    bool flag = true;

    rep(i, S.size()){
        char s = S[i], t = T[i];
        if(S_cnt.count(s)) if(S_cnt[s] != t) flag = false;
        if(T_cnt.count(t)) if(T_cnt[t] != s) flag = false;
        S_cnt[s] = t, T_cnt[t] = s;
    }

    if(flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main(){
    cin >> S >> T;

    solve();
}
