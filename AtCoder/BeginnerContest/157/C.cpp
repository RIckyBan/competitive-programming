#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 10
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans = -1;
int N,M,S[MAXM];
char C[MAXM];

bool check_num(int num) {
    string tmp = to_string(num);

    if(tmp.size() != N){
        return false;
    }

    // cout << tmp << endl;

    rep(i, M){
        if(tmp[S[i]] != C[i]){
            return false;
        }
    }

    return true;
}

void solve(){
    for(int num = 0; num < pow(10,N); num++){
        if(check_num(num)){
            ans = num;
            break;
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> N >> M;
    rep(i, M) {
        cin >> S[i] >> C[i];
        S[i]--;
    }

    solve();
}
