#include<iostream>

using namespace std;

int A, B, C;

int main(){
    cin >> A >> B >> C;
    if(A == B) cout << C << endl;
    else if(A == C) cout << B << endl;
    else cout << A << endl;
}
