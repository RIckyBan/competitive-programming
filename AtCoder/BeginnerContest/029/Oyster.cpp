#include <iostream>
#include <string>
#include <vector>

using namespace std;

string S[12];

int x, y, cnt=0;

int main(){
    for(int i = 0; i < 12; i++)
        cin >> S[i];

    for(int i = 0; i < 12; i++){
        auto found = S[i].find('r');
        if(found!=string::npos) cnt++;
    }
    cout << cnt << endl;
}
