#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int txa, tya, txb, tyb, T, V, N, x[1000+5], y[1000+5];

double dist(int x1, int y1, int x2, int y2){
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

bool can_go(){
    for(int i = 0; i < N; i++){
        double buff = dist(txa,tya, x[i], y[i]) + dist(txb, tyb, x[i], y[i]);
        if(buff <= T*V)
            return true;
    }
    return false;
}

int main(){
    cin >> txa >> tya >> txb >> tyb >> T >> V >> N;

    for(int i = 0; i < N; i++){
        cin >> x[i] >> y[i];
    }
    string ans = can_go() ? "YES" : "NO";
    cout << ans << endl;
}