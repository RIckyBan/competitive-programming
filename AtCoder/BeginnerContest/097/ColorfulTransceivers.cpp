#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll A,B,C,D;

bool canTalk(){
    return abs(A - C) <= D || (abs(A-B) <= D && abs(B - C) <= D);
}

int main(){
    cin >> A >> B >> C >> D;

    if(canTalk())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
