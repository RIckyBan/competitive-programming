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
int N,Q;
vi A, M;

bool canMake(int id, int m){
    if(m == 0) return true;
    if(id >= N) return false;

    bool res = canMake(id+1, m - A[id]) || canMake(id+1, m);
    return res;
}

void solve(){
    rep(i, Q){
        if(canMake(0, M[i])) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}

int main(){
    cin >> N;
    A.resize(N);
    rep(i, N) cin >> A[i];

    cin >> Q;
    M.resize(Q);
    rep(i, Q) cin >> M[i];

    solve();
}
