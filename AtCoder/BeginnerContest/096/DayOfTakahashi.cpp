#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int A,B;

void solve(){
    if(A <= B)
        cout << A << endl;
    else
        cout << A-1 << endl;
}

int main(){
    cin >> A >> B;

    solve();
}
