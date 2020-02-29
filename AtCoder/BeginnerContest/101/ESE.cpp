#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>

char buff;
ll ans = 0;

int main(){
    for(int i =0; i < 4; i++) {
        cin >> buff;
        if(buff == '+') ans++;
        else ans--;
    }

    cout << ans << endl;
}
