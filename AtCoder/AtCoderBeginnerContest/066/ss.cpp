#include <stdio.h>
#include <iostream>
#include <cmath>
#include <vector>
#include <string.h>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>

string S;
ll ans = 0;

bool isEvenStr(){
    bool flag = true;
    int N = S.size();

    if(N%2 != 0) flag = false;
    else{
        string s1 = S.substr(0,N/2);
        string s2 = S.substr(N/2,N/2);
        flag = strncmp(s1,s2,N/2);
        }
    }

    return flag;
}

void solve(){
    while(!S.empty()){
        if(isEvenStr()){
            ans = S.size();
            break;
        }
        S.pop_back();
    }

    cout << ans << endl;
}

int main(){
    cin >> S;
    
    S.pop_back();

    solve();
}
