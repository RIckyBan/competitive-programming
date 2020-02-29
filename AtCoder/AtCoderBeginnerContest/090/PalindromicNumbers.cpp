#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int A,B, cnt=0;

bool isKaibun(int num){
    string S = to_string(num);
    int N = S.size();

    for(int i = 0; i < N/2; i++){
        if(S[i]!=S[N-1-i]) return false;
    }
    return true;
}

void solve(){
    for(int i = A; i <= B; i++){
        if(isKaibun(i)) cnt++;
    }
    cout << cnt << endl;
}

int main(){
    cin >> A >> B;

    solve();
}
