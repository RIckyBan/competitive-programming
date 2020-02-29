#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N, A[205], cnt = 0;

void solve(){
    bool flag = true;
    while(flag){
        rep(i,N){
            if(A[i] % 2 == 0) A[i] = A[i] / 2;
            else flag = false;
        }
        if(flag)
            cnt++;
    }
    cout << cnt << endl;
}

int main(){
    cin >> N;
    
    rep(i,N) cin >> A[i];

    solve();
}
