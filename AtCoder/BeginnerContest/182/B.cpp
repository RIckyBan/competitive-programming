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
vi As;
int N, k, maxA=-1, tmp=0;

void solve(){

    for(int i = 2; i <= maxA; ++i){
        tmp = 0;
        rep(j, N){
            if(As[j] % i == 0) tmp++;
        }
        if(k < tmp) {
            k = tmp;
            ans = i;
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> N;
    As.resize(N);
    rep(i, N){
        cin >> As[i];
        maxA = max(maxA, As[i]);
    }

    solve();
}
