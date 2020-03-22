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

bool ans;
int N, L;
string S;

bool isPalindrome(string S){
    bool flag = true;

    int K = S.size();

    if(K==2){
        return S[0] == S[1];
    }

    rep(i, (K-1)/2){
        if(S[i] != S[K - 1 - i]){
            // cout << S[i] << " " << S[K - 1 - i] << endl;
            flag = false;
            break;
        }
    }

    return flag;
}

void solve(){
    L = (N-1)/2;

    // cout << S.substr(0,L) << endl;
    // cout << S.substr(L+1, L) << endl;

    if(isPalindrome(S) && isPalindrome(S.substr(0,L)) && isPalindrome(S.substr(L+1, L))){
        ans = true;
    } else{
        ans = false;
    }

    if(ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main(){
    cin >> S;
    N = S.size();

    solve();
}
