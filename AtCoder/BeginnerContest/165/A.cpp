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
int K,A,B, tmp;

void solve(){
    tmp = (A+ K - 1) / K;

    if(B >= tmp * K) cout << "OK" << endl;
    else cout << "NG" << endl; 
}

int main(){
    cin >> K >> A >> B;

    solve();
}
