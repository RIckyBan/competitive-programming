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

ll cnt = 0;
ll N;

void solve(){
    if(N % 2 == 1){
        cout << 0 << endl;
        return;
    }

    N /= 2;

    while(N > 0){
        cnt += N / 5;
        N/= 5;
    }
    
    cout << cnt << endl;
}

int main(){
    cin >> N;

    solve();
}
