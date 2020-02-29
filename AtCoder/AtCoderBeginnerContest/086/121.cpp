#include <iostream>
#include <cmath>
#include <string>

using namespace std;

#define ll long long

string a, b;

int main(){
    cin >> a >> b;

    int N = stoi(a+b);

    int buff = sqrt(N);

    if(N == buff*buff)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
}
