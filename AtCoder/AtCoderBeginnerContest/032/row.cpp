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

ll N,K,l=0,r=0,prd,ans=0,min_v=INF;
vll S;

void solve(){
    prd = 1;

    rep(l,N){
        while(r < N && prd * S[r] <= K){ //Kを超えなければ掛ける
            prd *= S[r];
            r++;
        }
        ans = max(ans, r-l);
        if(r==l) r++;
        else prd /= S[l];
    }

    cout << ans << endl;
}

int main(){
    cin >> N >> K;
    S.resize(N,0);
    rep(i,N){
        cin >> S[i];
        min_v = min(S[i],min_v);
    }
    if(min_v==0)
        cout << N << endl;
    else
        solve();
}
