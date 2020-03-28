#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans;
int A,B,C;
string S;

void solve(){

    if(S[2] == S[3] && S[5] == S[4])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main(){
    cin >> S;

    solve();
}
