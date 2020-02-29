#include <iostream>
#include <string>

using namespace std;

string S;
int C[30] = {0};
bool flag = true;

int main(){
    cin >> S;

    for(int i = 0; i < S.size(); i++) C[S[i]-'a']++;

    for(int i = 0; i < 26; i++)
        if(C[i] % 2 != 0) flag = false;

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}
