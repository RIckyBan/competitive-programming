#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

char X, Y;

int main(){
    cin >> X >> Y;
    
    if(X > Y)
        cout << ">" << endl;
    else if(X < Y)
        cout << "<" << endl;
    else
        cout << "=" << endl;
}
