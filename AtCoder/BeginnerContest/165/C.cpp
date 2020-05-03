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

int ans = 0, N, M, Q;
vi A, B, C, D, num;

int checkReq(vi tmp){
    int res = 0;

    rep(i, Q){
        if(tmp[B[i]] - tmp[A[i]] == C[i]) res += D[i];
    }

    return res;
}


void dfs(vi tmp){
    int n = tmp.size();

    if(n==N){
        // rep(i, N)
        //     cout << tmp[i+1] << " ";
        // cout << endl;
        ans = max(ans, checkReq(tmp));
    } else {
        tmp.push_back(tmp[n-1]);
        while(tmp[n] <= M){
            dfs(tmp);
            tmp[n]++;
        }
        tmp.pop_back();
    }
}

void solve(){

    rep(i, M){
        num.push_back(i+1);
        dfs(num);
        num.pop_back();
    }

    cout << ans << endl;
}

int main(){
    cin >> N >> M >> Q;
    A.resize(Q);
    B.resize(Q);
    C.resize(Q);
    D.resize(Q);

    rep(i, Q) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
        --A[i], --B[i];
    }
    
    solve();
}
