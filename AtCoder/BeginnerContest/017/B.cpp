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
int A,B,C, N;
string S;

bool checkChoku(string S){
    bool flag = false;
    N = S.size();
    
    if(N == 0) return true;

    if(N >= 2 && S[N-2] == 'c' && S[N-1] == 'h')
        flag = checkChoku(S.substr(0, N-2));

    if(S[N-1] == 'o' || S[N-1] == 'k' || S[N-1] == 'u')
        flag = checkChoku(S.substr(0, N-1));

    return flag;
}

void solve(){
    if(checkChoku(S))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}

int main(){
    cin >> S;

    solve();
}
