#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N,M,K;

bool solve(){
    rep(i,M+1){
        rep(j,N+1){
            if((M*j + N*i - 2*i*j) == K){
                return true;
                break;
            }
        }
    }
    return false;
}

int main(){
    cin >> N >> M >> K;

    if(solve())
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
