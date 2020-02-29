#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int X, ans = 1;

void solve(){
    int range = sqrt(X);

    for(int i = 2; i <= range; i++){
        int buff = 1;
        while(true){
            buff *= i;
            if(buff > X) break;
            ans =  max(ans, buff);
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> X;

    solve();
}
