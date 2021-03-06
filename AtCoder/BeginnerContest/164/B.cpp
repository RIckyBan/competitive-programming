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
int A,B,C,D, cnt;
void solve(){
    cnt = (C+B-1)/B;

    if(A > (cnt-1)*D) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main(){
    cin >> A >> B >> C >> D;

    solve();
}
