#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N,M;
string A[55], B[55];

int solve(){
    rep(i,N-M+1){
        rep(j,N-M+1) {
            bool flag = true;
            rep(l,M){
                string tmp = A[i+l].substr(j,M);
                if(tmp != B[l]) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                cout << "Yes" << endl;
                return 0;
                }
            }
        }
    cout<<"No"<<endl;
    return 0;
}

int main(){
    cin >> N >> M;

    rep(i,N) cin >> A[i];
    rep(i,M) cin >> B[i];

    solve();
}
