#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 200005
#define MAXM 100005
#define MOD 2019
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans = 0;
int N, cur;
string S;
vi Rems, tmp;
int remCnt[2019] = {};

int calcCombi(int n){
    return n*(n-1)/2;
}

int calcRem(int k){
    if(k == 0) return tmp[0];
    else{
        tmp[k] = 10*tmp[k-1]%MOD;
        return tmp[k];
    }

}

void solve(){
    Rems[0] = 0;

    rep(i, N){
        cur = S[i] - '0';
        // cout << cur << endl;
        Rems[i+1] = (Rems[i]+cur*calcRem(i))%MOD;
    }

    rep(i, N+1){
        remCnt[Rems[i]]++;
    }

    rep(i, 2019){
        if(remCnt[i] >= 2) ans += calcCombi(remCnt[i]);
    }

    cout << ans << endl;
}

int main(){
    cin >> S;
    N = S.size();

    Rems.resize(N+1);
    tmp.resize(N);
    tmp[0] = 1;

    reverse(S.begin(), S.end());

    solve();
}
