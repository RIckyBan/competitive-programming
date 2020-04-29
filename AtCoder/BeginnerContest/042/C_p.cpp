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


int N, K, ans;
vi D;

vector<bool> like;

bool check(int M){
    int tmp;
    while(M > 0){
        tmp = M % 10;
        if(!like[tmp]) return false;
        M /= 10;
    }
    return true;
}

void solve(){
    for(int m = N; m < INF; ++m){
        if(check(m)){
            ans = m;
            break;
        }
    }
    cout << ans << endl;
}

int main(){
    cin >> N >> K;
    like.resize(10, true);
    D.resize(K);

    rep(i, K) {
        cin >> D[i];
        like[D[i]] = false;
    }

    solve();
}
