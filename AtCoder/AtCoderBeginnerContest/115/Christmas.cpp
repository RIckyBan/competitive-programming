#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <string>

using namespace std;

long long ans[50+1]={};

// int find(string S){
//     int count  = 0;
//     int SIZE = S.size();
//     for(int i = (SIZE-1); i >= 0 ; --i){
//         if(S[i]=='P') count++;
//         S.pop_back();
//     } 
//     return count;
// }

long long calc_length(int N);
long long calc_allp(int N, long long length);
long long calc(int N, int X);


int main(){
    int N, X;
    cin >> N >> X;
    cout << calc(N, X) << endl;
}

long long calc_length(int N){
    if(N==0) return 1;
    else return 2*calc_length(N-1)+3;
}

long long calc_allp(int N){
    if(ans[N]==0){
        if(N==0) {
            ans[0] = 1;
            return ans[0];
        }
        else {
            ans[N] = 1+2*calc_allp(N-1);
            return ans[N];
        };
    }
    else return ans[N];
}

long long calc(int N, int X){ //Pの数を計算する
        cout << "(N, X) = (" << N << ", " <<  X <<")" << endl;
        if (N==0){
            return 1;
        }
        else if((X==1)||(X==0)){
            return 0;
        }
        else if(X <= 1 + calc_length(N-1)){
            return calc(N-1, X-1);
        }
        else {
            int length = calc_length(N-1);
            return calc_allp(N-1) + 1 + calc(N-1, (X-2-length));
        }
    }