#include <iostream>
#include <string>
using namespace std;

string S;

int main(){
    cin >> S;

    int length = S.size();

    if(S[0] >= 97) S[0] -= 32;

    for(int i = 1; i < length; i++){
        if(S[i] <= 90) S[i] += 32;
    }

    cout << S << endl;
}