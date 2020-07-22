#include <iostream>
#include <cmath>
#include <vector>
#include <map>
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
int N;
vi A;
map<int, int> mp;

void solve(){
    rep(i, N){
        while(A[i] % 2 == 0) A[i] /= 2;
        mp[A[i]]++;
    }

    cout << mp.size() << endl;
}

int main(){
    cin >> N;
    A.resize(N);

    rep(i, N) cin >> A[i];

    solve();
}