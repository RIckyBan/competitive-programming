#include <iostream>

using namespace std;

int A, B;

bool flag = false;

int main(){
    cin >> A >> B;

    if(A <= 8 && B <= 8) flag = true;

    if(flag)
        cout << "Yay!" << endl;
    else
        cout << ":(" << endl;
}
