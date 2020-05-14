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

ll ans, N;
string S;

void solve(){
    rep(i, N){
        if(S[i] == 'U'){
            ans += N - 1 - i;
            if(i > 0)
                ans += 2*i;
        } else {
            ans += i;
            ans += 2*(N - 1 - i);
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> S;

    N = S.size();

    solve();
}
