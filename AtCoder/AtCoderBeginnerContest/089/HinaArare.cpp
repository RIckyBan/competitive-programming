#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

ll N;
char buff;
bool flag = false;

int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> buff;
        if(buff == 'Y') flag = true;
    }

    if(flag)
        cout << "Four" << endl;
    else
        cout << "Three" << endl;
}
