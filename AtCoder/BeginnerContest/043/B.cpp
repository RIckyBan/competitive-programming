#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int A,B,C;
string S, ans = "";

void solve(){
    int n = S.size();
    rep(i, n) {
        if(S[i] == 'B'){
            if(ans.size() > 0) ans.pop_back();
        } 
        else ans.push_back(S[i]);
    }

    cout << ans << endl;
}

int main(){
    cin >> S;

    solve();
}
