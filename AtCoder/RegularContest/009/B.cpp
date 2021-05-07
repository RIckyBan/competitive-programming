#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <map>
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
int N;
vector<string> a;
vector<char> b;
map <char, int> mp;
vector<pair<int, string> > vec;

int conv_digit(string S) {
    int K = S.size(), res = 0;

    rep(i, K) {
        res += mp[S[i]] * pow(10, K - 1 - i);
    }

    return res;
}

void solve(){
    rep(i, 10) {
        mp[b[i]] = i;
    }

    rep(i, N) {
        pair<int, string>  tmp = make_pair(conv_digit(a[i]), a[i]);
        vec.push_back(
            tmp
        );
    }

    sort(vec.begin(), vec.end());

    for(auto v : vec) {
        cout << v.second << endl;
    }
}

int main(){
    b.resize(10);

    rep(i, 10) cin >> b[i];

    cin >> N;
    a.resize(N);

    rep(i, N) cin >> a[i];

    solve();
}
