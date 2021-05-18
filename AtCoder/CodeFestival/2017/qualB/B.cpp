#include <iostream>
#include <cmath>
#include <vector>
#include <map>
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
int N,M, D, T;
map<int, int> mp;

int main(){
    cin >> N;
    rep(i, N) {
        cin >> D;
        mp[D]++;
    }
    
    cin >> M;
    rep(i, M) {
        cin >> T;
        if(mp[T] == 0) {
            cout << "NO" << endl;
            return 0;
        } else {
            mp[T]--;
        }
    }
    cout << "YES" << endl;
}
