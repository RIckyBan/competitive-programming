#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

string S;
int T, x = 0, y = 0, cnt = 0, buff = 0;

void move(int i){
    if(S[i] == 'L') x--;
    else if(S[i] == 'R') x++;
    else if(S[i] == 'U') y++;
    else if(S[i] == 'D') y--;
    else if(S[i] == '?') cnt++;
}

int solve(){
    for(int i = 0; i < S.length(); i++){
        move(i);
    }

    int ans = abs(x) + abs(y);

    for(int j = 0; j < cnt; j++){
        if(T == 1) ans++;
        else if(T == 2){
            if(ans == 0) ans++; //原点にいるとansを減らせない
            else ans--;
        } 
    }

    return  ans;
}

int main(){
    cin >> S >> T;

    cout << solve() << endl;
}
