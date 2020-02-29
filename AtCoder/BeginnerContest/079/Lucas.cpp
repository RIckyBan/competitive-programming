#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int N;
ll x, y;

int main(){
    cin >> N;

    x = 2, y = 1;

    for(int i = 0;i < N; i++){
        if(i % 2 == 0) x += y;
        else y += x;
    }

    if(N % 2 == 0) cout << x << endl;
    else cout << y << endl;
}
