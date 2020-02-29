#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

ll A, B, K, cur;

int main(){
    cin >> A >> B >> K;

    cur = min(A + K - 1, B);

    for(int i = A; i <= cur; i++)
        cout << i << endl;

    cur = max(cur+1, B - K + 1);

    for(int i = cur; i <= B; i++)
        cout << i << endl;
}
