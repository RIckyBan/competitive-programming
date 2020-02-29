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
    if(A > B) cout << "Alice" << endl;
    else if(A < B) cout << "Bob" << endl;
    else cout << "Draw" << endl;
}

int main(){
    cin >> A >> B;
    if(A == 1) A += 13;
    if(B == 1) B += 13;    
    solve();
}
