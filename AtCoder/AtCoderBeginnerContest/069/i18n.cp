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

string S;

void solve(){
    int N = S.size();
    cout << S[0] << N-2 << S[N-1] << endl;
}

int main(){
    cin >> S;

    solve();
}
