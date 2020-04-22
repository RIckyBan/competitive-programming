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
int N;
vi A;
bool flag = false;

void solve(){
    rep(i, N){
        if(A[i] % 2 == 1) {
            flag = true;
            break;
        }
    }

    if(flag) cout << "first" << endl;
    else cout << "second" << endl;
}

int main(){
    cin >> N;
    A.resize(N);

    rep(i, N) cin >> A[i];

    solve();
}
