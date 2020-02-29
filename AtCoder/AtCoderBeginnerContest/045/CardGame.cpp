#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string S[3];

void solve(){
    bool flag = true;
    int index = 0;
    while(flag){
        if(S[index].size()==0){
            cout << (char)('A'+index) << endl;
            break;
        }
            char buff = S[index].front();
            S[index].erase(S[index].begin());
            index = buff - 'a';
    }
}

int main(){
    cin >> S[0] >> S[1] >> S[2];

    solve();
}
