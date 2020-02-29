#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int N, H[105], diff[105] = {0}, ans=0;

int main(){
    cin >> N;

    for(int i = 0; i < N; i++)
        cin >> H[i];

    diff[0] = H[0];
    for(int i = 1; i < N; i++)
        diff[i] = H[i] - H[i-1];
    
    for(int i = 0; i < N; i++){
        if(diff[i] > 0) ans += diff[i];
    }
    cout << ans << endl;
}
