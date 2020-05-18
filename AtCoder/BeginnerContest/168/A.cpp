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

ll ans;
int N, tmp;

void solve(){
    tmp = N % 10;

    if(tmp == 3){
        cout << "bon" << endl;
    } else if(tmp == 0 || tmp == 1 || tmp == 6 || tmp == 8){
        cout << "pon" << endl;
    } else {
        cout << "hon" << endl;
    }
}

int main(){
    cin >> N;

    solve();
}
