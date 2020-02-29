#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int H1, W1, H2, W2;

int main(){
    cin >> H1 >> W1 >> H2 >> W2;

    if(H1 == H2 || H1 == W2 || W1 == H2 || W1 == W2) cout << "YES" << endl;
    else cout << "NO" << endl;
}
