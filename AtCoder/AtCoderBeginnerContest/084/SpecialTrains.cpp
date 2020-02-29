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

ll N, cur;
vll C,S,F;

ll calc(int n){
    cur = 0;

    for(int i = n; i < N-1; i++){
        //printf("Station %d: %lld\n",i,cur);
        cur = max(cur, S[i]);
        if((cur - S[i])%F[i] > 0)
            cur += F[i] - (cur - S[i])%F[i];
        cur += C[i];
    }

    return cur;
}

void solve(){
    rep(i,N)
        cout << calc(i) << endl;
}

int main(){
    cin >> N;
    C.resize(N-1), S.resize(N-1), F.resize(N-1);
    rep(i,N-1)
        cin >> C[i] >> S[i] >> F[i];

    solve();
}
