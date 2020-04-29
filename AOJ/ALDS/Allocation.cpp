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
int N,K;
vi W;

int checkNum(ll P){
    int i = 0;
    rep(j, K){
        ll s = 0;
        while(s + W[i] <= P){
            s += W[i];
            i++;
            if(i == N) return N;
        }
    }
    return i;
}

void solve(){
    // Pの値を二部探索!
    ll left = 0;
    ll right = 1e10;

    while(left + 1 < right){
        ll mid = (left+right)/2;
        if(checkNum(mid) >= N) right = mid;
        else left = mid;
    }

    cout << right << endl;
}

int main(){
    cin >> N >> K;
    W.resize(N);

    rep(i, N) cin >> W[i];

    solve();
}

