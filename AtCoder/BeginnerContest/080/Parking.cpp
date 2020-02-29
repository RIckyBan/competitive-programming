#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll N,A,B;

void solve(){
    cout << min(N*A,B) << endl;
}

int main(){
    cin >> N >> A >> B;

    solve();
}
