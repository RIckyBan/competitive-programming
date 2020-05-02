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

ll cnt = 0, cur = 100;
ll  X;

void solve(){
    while(cur < X){
        cnt++;
        cur *= 1.01;
    }

    cout << cnt << endl;
}

int main(){
    cin >> X;

    solve();
}
