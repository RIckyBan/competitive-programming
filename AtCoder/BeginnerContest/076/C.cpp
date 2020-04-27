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
string S, S_p, T;
int N, K, cur = -1;

bool canBePlaced(int i){
    rep(j, K){
        if(S_p[i+j] != '?' && S_p[i+j] != T[j]) return false;
    }

    return true;
}

void solve(){
    for(int i = N - K; i >= 0; --i){
        if(canBePlaced(i)){
            cur = i;
            break;
        }
    }

    if(cur >= 0){
        rep(i, K){
            S[cur+i] = T[i];
        }
        cout << S << endl;
        return;
    } else {
        cout << "UNRESTORABLE" << endl;
        return;
    }
}

int main(){
    cin >> S_p >> T;

    K = T.size();
    N = S_p.size();
    
    S = S_p;
    rep(i, N){
        if(S_p[i] == '?') S[i] = 'a';
    }

    solve();
}
