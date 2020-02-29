// メモ: 無理に負の数を扱わない、シンプルに考える

#include <iostream>
#include <cmath>

#define INF 1000000

using namespace std;

int N, M, x, y, z;


int main(){

cin >> N >> M;

x = -1; y = -1; z = -1;

int diff  = M - 2 * N; // 2*z + 1*y = diffを解く
// cout << "diff: " <<  diff << endl;
if( N * 2 <= M && M <= N * 4){ //この範囲になければアウト
    for(int i = 0; i <= N; ++i){
        int buff = diff - 2 * i;
        // cout << "buff: " <<  buff << endl;
        if( 0 <= buff && buff <= (N-i)) {
            y = buff; z = i; x = N - (z + y); 
            break;
        }
    }
}

printf("%d %d %d\n",x ,y ,z);
}