#include <iostream>
#include <cmath>
#include <bitset>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

int N, X, A[25]={0};

void solve(){
    stringstream ss;
    ss << bitset<20>(X);
    string S = ss.str();
    // cout << S << endl;
    int range = S.size()-1;
    int cnt = 0, sum = 0;
    for(int i = range; i > range - N;i--){
        if(S[i] == '1'){
            // printf("%d: %d\n",i,A[cnt]);
            sum += A[cnt];
        } 
        cnt++;
    }
    cout << sum << endl;
}

int main(){
    cin >> N >> X;

    for(int i = 0; i < N; i++) cin >> A[i];

    solve();
}
