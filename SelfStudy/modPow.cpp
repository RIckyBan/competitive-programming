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
int X,N;

ll modPow(ll x,ll n,ll mod=MOD){
    if(n==0)return 1;
    if(n%2==0)return modPow(x*x,n/2,mod)%mod;
    return x%mod*modPow(x,n-1,mod)%mod;
}

int main(){
    cin >> X >> N;

    cout << modPow(X, N) << endl;
}
