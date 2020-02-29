#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int K, S, ans = 0;

int main(){
    cin >> K >> S;

    for(int i = 0; i <= K;i++)
        for(int j = 0; j <= K; j++){
            int Z = S - i - j;
            if( 0 <= Z && Z <= K) ans++;
        }

    cout << ans << endl;
}
