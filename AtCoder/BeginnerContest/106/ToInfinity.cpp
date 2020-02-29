#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

string S;
ll K;
char ans;

void solve(){
    ans = '1';

    for(int i = 0;i < K; i++){
        if(S[i] != '1'){
            ans = S[i];
            break;
        }
    }
    
    cout << ans << endl;
}

int main(){
    cin >> S >> K;

    solve();
}
