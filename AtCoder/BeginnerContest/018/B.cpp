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

ll ans;
string S;
int N;
vi l, r;

void solve(){
    rep(i, N){
        reverse(S.begin()+l[i], S.begin()+r[i]);
    }
    cout << S << endl;
}

int main(){
    cin >> S >> N;

    l.resize(N);
    r.resize(N);

    rep(i, N){
        cin >> l[i] >> r[i];
        l[i]--, r[i];
    }

    solve();
}
