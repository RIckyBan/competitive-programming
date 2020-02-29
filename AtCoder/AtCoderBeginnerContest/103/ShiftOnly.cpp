#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N, a[205], cnt=0;

bool allEven(){
    rep(i,N){
        if(a[i] % 2 != 0) return false;
        else a[i] = a[i] / 2;
    }
    return true;
}

int main(){
    cin >> N;
    rep(i,N) cin >> a[i];

    while(allEven()){
        cnt++;
    }
    cout << cnt << endl;
}
