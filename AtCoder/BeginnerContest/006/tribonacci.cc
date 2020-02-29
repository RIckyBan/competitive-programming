// メモ: 

#include <iostream>
#include <cmath>

#define DIV  10007

using namespace std;

int N, a[1000000 + 5] = {};

int calc(int N);

int main(){

cin >> N;

cout << calc(N) << endl;
}

int calc (int N){
    if (N == 1) return 0;
    else if(N == 2) return 0;
    else if(N == 3) return 1;
    else if(a[N] != 0) return a[N];
    else {
        a[N] = (calc(N-1) + calc(N-2) + calc(N-3))%DIV;
        return a[N];
    }
}