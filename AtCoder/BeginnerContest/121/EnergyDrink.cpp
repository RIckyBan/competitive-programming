#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N, M, buffA, buffB;
ll ans = 0;
vector<pii> vec;

void solve(){
    rep(i, N){
        pii cur = vec[i];

        ans += (ll)cur.first * (ll)min(cur.second, M);

        M -= cur.second;
        if(M < 0) break;
    }
    printf("%lld\n",ans);
}

int main(){
    scanf("%d %d", &N, &M);

    vec.resize(N);

    rep(i,N){
        scanf("%d %d", &buffA, &buffB);
        vec[i] = make_pair(buffA, buffB);
    }

    sort(vec.begin(), vec.end());

    solve();
}
