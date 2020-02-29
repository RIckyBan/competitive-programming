#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N,A,B, ans=0;

int digitSum(int N){
    int sum = 0;
    while(N!=0){
        sum += N % 10;
        N = N / 10;
    }
    return sum;
}

int main(){
    cin >> N >> A >> B;

    rep(i,N){
        int buff = digitSum(i+1);
        if(A <= buff && buff <= B) ans += i + 1;
    }

    cout << ans << endl;
}