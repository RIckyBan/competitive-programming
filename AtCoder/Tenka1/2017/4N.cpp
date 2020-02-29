#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e4
#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N;
ll h,n,w;


int solve(){
    rep(i,3500){
        h = i+1;
        rep(j,3500){
            n = j+1;
            if(4*h*n-(h+n)*N > 0 && (N*h*n)%(4*h*n-(h+n)*N)==0){
                w = (N*h*n)/(4*h*n-(h+n)*N);
                printf("%lld %lld %lld\n",h,n,w);
                return 0;
            }
        }
    }
}

int main(){
    cin >> N;

    solve();
}
