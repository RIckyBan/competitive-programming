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

ll ans;
int K;
string S, tmp = "";


void solve(){
    if(K >= S.length() ) {
        cout << S << endl;
    } else {
        rep(i, K){
            tmp += S[i];
        }
        tmp += "...";
        cout << tmp << endl;
    }
}

int main(){
    cin >> K >> S;

    solve();
}
