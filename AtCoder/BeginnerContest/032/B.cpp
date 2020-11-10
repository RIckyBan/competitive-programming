#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <map>

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

string S,tmp;
int N,K;
map<string, int> mp;

void solve(){
    N = S.size();

    for(int i = 0; i < N-K+1; i++){
        tmp = S.substr(i, K);
        // cout << tmp << endl;
        mp[tmp]++;
    }
    
    cout << mp.size() << endl;
}

int main(){
    cin >> S >> K;

    solve();
}
