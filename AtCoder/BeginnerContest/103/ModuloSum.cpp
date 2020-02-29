#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N, buff;
ll ans = 0;
int main(){
    cin >> N;

    rep(i,N){
        cin >> buff;
        buff--;
        ans += buff;
    }
    cout << ans << endl;
}
