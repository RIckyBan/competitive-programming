#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N;
vi vec;

int main(){
    cin >> N;

    vec.resize(N,0);

    rep(i, N) cin >> vec[i];

    sort(vec.begin(), vec.end());

    cout << vec.back() - vec.front() << endl;
}
