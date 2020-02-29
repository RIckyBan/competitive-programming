#include <iostream>

using namespace std;

int a, b, c;

int main(){
    cin >> a >> b >> c;

    if(b-a == c - b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
