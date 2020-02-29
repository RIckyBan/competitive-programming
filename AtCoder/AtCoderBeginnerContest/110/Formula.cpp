#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int A,B,C, ans = 0;

int main(){
    cin >> A >> B >> C;

    ans = max(A * 10 + B + C, ans);
    ans = max(B * 10 + A + C, ans);
    ans = max(C * 10 + B + A, ans);

    cout << ans << endl;
}
