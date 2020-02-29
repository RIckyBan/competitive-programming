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

ll X,Y;

bool solve(){
    if(X == 2 || Y == 2)
        return false;
    
    bool gX=false, gY=false;

    if(X == 4 || X == 6 || X == 9 || X == 11)
        gX = true;

    if(Y == 4 || Y == 6 || Y == 9 || Y == 11)
        gY = true;

    return gX == gY;
}

int main(){
    cin >> X >> Y;

    if(solve())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
