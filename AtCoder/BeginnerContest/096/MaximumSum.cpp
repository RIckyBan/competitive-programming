#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int A, B, C, K, res = 0;

int main(){
    cin >> A >> B >> C >> K;

    int maxV = max(A, B);
    maxV = max(maxV, C);

    if(maxV == A){
        res += A * pow(2,K) + B + C;
    } else if(maxV == B){
        res += B * pow(2,K) + A + C;
    } else if(maxV == C){
        res += C * pow(2,K) + A + B;
    }

    cout << res << endl;
}
