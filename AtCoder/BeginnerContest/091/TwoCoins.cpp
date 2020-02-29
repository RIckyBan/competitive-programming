#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int A,B,C;

int main(){
    cin >> A >> B >> C;

    if((A + B) >= C)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
