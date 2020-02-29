#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 10005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll N,X,D;
vi xs, diff;
int dmax = 0, dmin = INF; 

int GCM(int a, int b){
    if(b==0) return a;

    return GCM(b, a % b);
}

void solve(){
    sort(xs.begin(),xs.end());

    rep(i,N){
        diff[i] = xs[i+1] - xs[i];
    }

    if(N == 1)
        D = diff[0];
    else{
        D = GCM(diff[0], diff[1]);
        rep(i,N-2)
            D = GCM(D, diff[i+2]);
    }

    cout << D << endl;
}

int main(){
    cin >> N >> X;
    xs.resize(N+1);
    diff.resize(N);

    rep(i,N){
        cin >> xs[i];
    }
    xs[N] = X;

    solve();
}
