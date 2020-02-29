#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

map<char, int> mp;
string S;

int main(){
    cin >> S;

    for(int i = 0; i < 3; i++) mp[S[i]]++;

    if(mp['a'] == 1 && mp['b'] == 1 && mp['c'] == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
}
