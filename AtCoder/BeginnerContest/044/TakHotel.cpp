#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll N,K,X,Y;

void solve(){
    if(N >= K)
        cout << K*X + (N-K)*Y << endl;
    else
        cout << N*X << endl;
}

int main(){
    cin >> N >> K >> X >> Y;

    solve();
}
