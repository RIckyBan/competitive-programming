#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

char b;

void solve(){
    if(b == 'A')
        cout << 'T' << endl;
    else if(b == 'T')
        cout << 'A' << endl;
    else if(b == 'G')
        cout << 'C' << endl;
    else if(b == 'C')
        cout << 'G' << endl;
}

int main(){
    cin >> b;

    solve();
}
