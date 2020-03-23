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
int N, a[MAXN];
vi Xs;

void solve(){
    sort(Xs.begin(), Xs.end());

    rep(i, N){
        if(a[i] < Xs[(N+1)/2])
            cout << Xs[(N+1)/2] << endl;
        else
            cout << Xs[(N-1)/2] << endl;
    }
}

int main(){
    cin >> N;

    Xs.resize(N);

    rep(i, N) {
        cin >> Xs[i];
        a[i] = Xs[i];
    }
    solve();
}
