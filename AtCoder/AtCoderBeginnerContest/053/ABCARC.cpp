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

ll X;

void solve(){
    if(X < 1200)
        cout << "ABC" << endl;
    else
        cout << "ARC" << endl;
}

int main(){
    cin >> X;

    solve();
}
