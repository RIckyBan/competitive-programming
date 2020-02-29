#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N,Q,s,t;
string S;
vi vec,sum;

int main(){
    cin >> N >> Q >> S;

    vec.resize(N,0), sum.resize(N+1,0);
    for(int i = 1; i < N; i++){
        if(S[i] == 'C' && S[i-1] == 'A') vec[i-1]=1;
    }

    rep(i,N)
        sum[i+1] = sum[i] + vec[i];

    rep(i, Q){
        cin >> s >> t;
        --s, --t;
        cout << sum[t] - sum[s] << endl;
    }
}
