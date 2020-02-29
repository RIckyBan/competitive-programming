#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int x, y;

int main(){
    cin >> x >> y;

    if(y % x == 0)
        cout << y + x << endl;
    else
        cout << y - x << endl;
}
