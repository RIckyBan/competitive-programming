#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int A,B;
string S;

bool solve(){
    for(int i = 0; i < S.size(); i++){
        char cur = S[i];
        if(i == A){
            if(cur != '-') return false;
        }else{
            if((cur - '0') > 9 || (cur - '0') < 0) return false;
        }
    }
    return true;
}

int main(){
    cin >> A >> B >> S;

    if(solve()) cout << "Yes" << endl;
    else cout << "No" << endl;
}
