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

ll A,B,X;

void solve(){
    if(B > X - A && A <= X)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main(){
    cin >> A >> B >> X;

    solve();
}
