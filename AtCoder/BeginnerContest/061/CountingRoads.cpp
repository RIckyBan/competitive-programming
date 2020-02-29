#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

#define MAX_N 50

int N,M,a[MAX_N],b[MAX_N];
vi vec;

void solve(){
    rep(i,M){
        vec[a[i]]++;
        vec[b[i]]++;
    }
    rep(i,N)
        cout << vec[i] << endl;
}

int main(){
    cin >> N >> M;

    vec.resize(N,0);

    rep(i,M){
        cin >> a[i] >> b[i];
        --a[i], --b[i];
    } 

    solve();
}
