#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int H,W,h,w;

int main(){
    cin >> H >> W >> h >> w;

    cout << H * W - (H * w + W * h - h * w) << endl;
}
