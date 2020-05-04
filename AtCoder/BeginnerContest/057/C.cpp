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

int ans = INF;
ll N, tmp;

int calcDigit(ll A, ll B){
    if(A < B) swap(A, B);

    string res = to_string(A);

    return res.size();
}

void solve(){
    for(int k = 1; k <= sqrt(N); ++k){
        if(N % k != 0) continue;

        tmp = N / k;

        ans = min(ans, calcDigit(k, tmp));
        // cout <<  k << " " << tmp << " " <<  ans << endl;
    }

    cout << ans << endl;
}

int main(){
    cin >> N;

    solve();
}
