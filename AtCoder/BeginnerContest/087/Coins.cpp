#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int A, B, C, X, ans = 0;

int main(){
    cin >> A >> B >> C >> X;

    for(int i = 0; i <= A; i++){
        for(int j = 0; j <= B; j++){
            for(int k = 0; k <= C; k++){
                int buff = 500*i + 100 * j + 50 * k;
                if(buff == X) ans++;
            }
        }
    }

    cout << ans << endl;
}
