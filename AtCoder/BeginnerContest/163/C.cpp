#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 200005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll N;
vi C[MAXN], ans, A;

int dfs(int i){
    if(ans[i] != -1) return ans[i];

    if(C[i].empty()){
        ans[i] = 0;
        return 0;
    }
    else {
        ans[i] = C[i].size();
        rep(j, C[i].size()){
            ans[i] += dfs(C[i][j]);
        }
        return ans[i];
    }
}

void solve(){
    // for(int i = 1; i <= N; ++i) cout << dfs(i) << endl;
    for(int i = 1; i <= N; ++i) cout << C[i].size() << endl;  
}

int main(){
    cin >> N;
    ans.resize(N+1);

    fill(ans.begin(), ans.end(), -1);

    A.resize(N+1);
    A[0] = -1;
    A[1] = 1;

    for(int i = 2; i<= N; ++i) cin >> A[i];

    for(int i = 2; i<= N; ++i){
        C[A[i]].push_back(i);
    }

    solve();
}
