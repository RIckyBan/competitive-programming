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
int N;
vi A, B;

void solve(){
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    rep(i, N){
        if(A[i] > B[i]){
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;
}

int main(){
    cin >> N;
    A.resize(N), B.resize(N);

    rep(i, N){
        cin >> A[i];
    }
    rep(i, N){
        cin >> B[i];
    }

    solve();
}
