#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int A,B,C,D;

int main(){
    cin >> A >> B >> C >> D;

    int left = A + B;
    int right = C + D;
    if(left > right) cout << "Left" << endl;
    else if(right > left) cout << "Right" << endl;
    else cout << "Balanced" << endl;
}
