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

ll N,Q, L[105], R[105], T[105];
vll ans;

void solve(){
    for(int i = Q-1; i >= 0; i--){
        for(int j = L[i]; j <= R[i]; j++)
            if(ans[j]==0) ans[j] = T[i];
    }

    rep(i,N)
        cout << ans[i] << endl;
}

int main(){
    cin >> N >> Q;

    ans.resize(N,0);

    rep(i,Q){
        cin >> L[i] >> R[i] >> T[i];
        --L[i], --R[i];
    }

    solve();
}
