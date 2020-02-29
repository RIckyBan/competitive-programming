#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N, A[100005], initial_sum = 0;

void solve(){
    rep(i, N){
        int buff = abs(A[i+2] - A[i]) - abs(A[i+1] - A[i]) - abs(A[i+2] - A[i+1]);
        cout << initial_sum + buff << endl;
    }
}

int main(){
    cin >> N;
    A[0] = 0; A[N+1] =0;

    rep(i, N) {
        cin >> A[i+1];
        initial_sum += abs(A[i+1] - A[i]);
    }
    initial_sum += abs(A[N+1] - A[N]);

    solve();
}
