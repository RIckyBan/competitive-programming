#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

double A,B;

int main(){
    cin >> A >> B;

    cout << ceil((A+B)/2.0) << endl;
}
