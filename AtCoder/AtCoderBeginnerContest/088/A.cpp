#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>

ll N, A;

int main(){
    cin >> N >> A;

    if(N % 500 <= A)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
