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

int N;
ll cnt = 0;
vi A;

void solve(){
    rep(i,N){
        int buff = A[i];
        if(A[buff] == i)
            cnt++;
    }

    cout << cnt / 2 << endl;
}

int main(){
    cin >> N;
    A.resize(N,0);
    rep(i,N){
        cin >> A[i];
        A[i]--;
    }
        

    solve();
}
