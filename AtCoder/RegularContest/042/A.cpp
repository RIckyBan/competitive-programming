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
int N, M;
vi A;
bool used[MAXN];

void solve(){
    for(int i = M-1; i >= 0; --i){
        if(!used[A[i]]) cout << A[i] + 1 << endl;
        used[A[i]] = true;
    }

    rep(i, N){
        if(!used[i]) cout << i + 1 << endl;
    }
}

int main(){
    cin >> N >> M;
    A.resize(M);

    rep(i, M) {
        cin >> A[i];
        A[i]--;
    }

    solve();
}
