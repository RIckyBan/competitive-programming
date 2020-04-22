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

ll ans;
int N,M;
vi A, B;
bool visited[MAXN] = {}, flag=false;;

void solve(){
    rep(i, M){
        if(A[i] == 0) visited[B[i]] = true;
    }

    rep(i, M){
        if(B[i] == (N-1) && visited[A[i]]) {
            flag = true;
            break;
        }
    }

    if(flag) cout << "POSSIBLE" << endl;
    else cout << "IMPOSSIBLE" << endl;
}

int main(){
    cin >> N >> M;
    A.resize(M);
    B.resize(M);

    rep(i, M) {
        cin >> A[i] >> B[i];
        A[i]--, B[i]--;
    }
    solve();
}
