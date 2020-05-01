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

int N, T;

void solve(int k){
    ll ans = 0;

    rep(i, k){
        int res = i % 4;
        // cout << pow(2, i+1) << endl;
        if(res == 0 || res == 3)
            ans += pow(2, i+1);
        else
            ans -= pow(2, i+1);

    }

    cout << abs(ans) << endl;
}

int main(){
    cin >> T;

    rep(i, T){
        cin >> N;
        solve(N);
    }

}
