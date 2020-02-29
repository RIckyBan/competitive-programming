#include <iostream>
#include <string>

using namespace std;

string S;
bool isUsed[27] = {0}, flag = true;

int main(){
    cin >> S;

    for(int i = 0; i < S.size(); i++){
        char buff = S[i];

        if(isUsed[buff - 'a']){
            flag = false;
            break;
        }
        isUsed[buff - 'a'] = true;
    }

    if(flag) cout << "yes" << endl;
    else cout << "no" << endl;
}
