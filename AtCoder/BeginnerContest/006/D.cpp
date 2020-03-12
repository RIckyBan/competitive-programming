#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

vi res;
int N, c[MAXN], dp[MAXN], length = 0;

void solve(){
    fill(dp, dp+N+1, INF);

    rep(i, N){
        if(c[i] < dp[length]){
            auto itr = lower_bound(dp, dp+length, c[i]);
            // cout << "from " << *itr;
            *itr = c[i];
            // cout << " to " << *itr << endl;
        }
        else{
            length++;
            dp[length] = c[i];
        }
    }

    cout << N - (length+1) << endl;

    for(int i = N -1; i >= 0; --i){
        if(dp[length] <= c[i] && c[i] < dp[length+1]){
            res.push_back(c[i]);
            length--;
        }
        if(length < 0) break;
    }

    reverse(res.begin(), res.end());

    for(auto v: res){
        cout << v << " ";
    }
    cout << endl;
}

int main(){
    cin >> N;

    rep(i, N) cin >> c[i];

    solve();
}
