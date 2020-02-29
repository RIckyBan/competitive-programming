#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll X,Y,cnt=1;

void solve(){
    ll cur = X;
    while(true){
    ll buff = cur * 2;
    if(buff <= Y){
        cnt++;
        cur = buff;
    }
    else break;
    }
    cout << cnt << endl;
}

int main(){
    cin >> X >> Y;

    solve();
}
