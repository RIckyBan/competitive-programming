#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

string S;

int main(){
    cin >> S;

    rep(i,S.size()){
        if(S[i]=='1') cout << '9';
        else cout << '1';
    }
    cout << endl;
}
