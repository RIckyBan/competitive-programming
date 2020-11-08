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

ll ans = 0;
int N, cnt = 0;
string S;
vi num25;

ll calc_sum(ll val) {
    return val*(val+1)/2;
}

void solve(){
    rep(i, N-1){
        if(S[i]== '2' && S[i+1] == '5'){
            cnt++;
            i++;
        } else {
            num25.push_back(cnt);
            cnt = 0;
        }
    }

    if(cnt != 0) num25.push_back(cnt);

    for(auto v : num25) ans += calc_sum(v);

    cout << ans << endl;

}

int main(){
    cin >> S;
    N = S.size();

    solve();
}
