#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int N, Y;

bool solve(){
    int diff = N * 10000 - Y; //全て1万円だった時との差分

    if(diff < 0) return false; //減らせないので無理

    for(int z = 0; z <= N; z++){
        int diff_buff = diff - 9000*z;
        int y = diff_buff / 5000;
        if(diff_buff % 5000 == 0 && 0 <= y && y <= N - z){
            cout << N - (y+z) << " " << y << " " << z << endl;
            return true;
        }
    }

    return false;
}

int main(){
    cin >> N >> Y;

    if(!solve()) cout << "-1 -1 -1" << endl;
}
