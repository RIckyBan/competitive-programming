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
ll A,B,N, x;

void solve(){
    if(A == 1 || B==1){
        cout << 0 << endl;
        return;
    } 

    if(N < B){
        x = N;
        cout << floor((A*x)/B) << endl;
    } else{
        cout << floor((A*(B-1))/B) << endl;
    }
}

int main(){
    cin >> A >> B >> N;

    solve();
}
