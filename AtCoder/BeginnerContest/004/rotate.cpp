#include <iostream>

using namespace std;

char before[16];

int main(){
    for(int i = 0; i < 16; ++i)
        cin >> before[i];

    for(int i = 15; i >= 0; --i){
        cout << before[i] << " ";
        if(i % 4 == 0) cout << endl;
    }
}