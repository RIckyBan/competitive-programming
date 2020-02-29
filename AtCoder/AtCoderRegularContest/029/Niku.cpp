#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int N, t[4], time1, time2, ans = 1e9;

void solve(){
    for(int bit = 0; bit < 1<<4; bit++){
        time1 = 0, time2 = 0;
        for(int i = 0; i < 4; i++){
            if(bit & 1<<i)
                time1 += t[i];
            else 
                time2 += t[i];
        }
        ans = min(ans, max(time1,time2));
    }
    cout << ans << endl;
}

int main(){
    cin >> N;

    for(int i = 0; i < N; i++) cin >> t[i];

    solve();
}
