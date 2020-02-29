#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>

ll A, B;

int main(){
    cin >> A >> B;

    if(A % 2 !=0 && B % 2 != 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}