#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int N, SN=0;

int main(){
    cin >> N;
    int buff = N;
    while(true){
        SN += buff % 10;
        if(buff < 10) break;
        else buff /= 10;
    }

    if(N % SN == 0)cout << "Yes" << endl;
    else cout << "No" << endl;
}
