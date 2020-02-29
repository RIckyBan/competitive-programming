#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll N, b, ans, th = 0;
vll A;
double mean = 0.0;
map<int, int> MP;

ll calc_abs(int b){
    ll buff = 0;
    rep(i,N)
        buff += abs(A[i] - b);
    return buff;
}

void solve(){
    if(N % 2 == 0)
        b = (A[N/2 - 1] + A[N/2])/2.0;
    else
        b = A[N/2] * 1.0;

    cout << calc_abs(b) << endl;
}

int main(){
    cin >> N;
    A.resize(N);
    rep(i,N){
        cin >> A[i];
        A[i] -= i+1;
    }

    sort(A.begin(), A.end());

    solve();
}
