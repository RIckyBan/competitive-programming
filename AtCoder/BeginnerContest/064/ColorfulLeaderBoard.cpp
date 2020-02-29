#include <iostream>
#include <cmath>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll N, cnt=0;
vll A;
map<int, int> mp;

void solve(){

    printf("%d %lld\n", max(1,(int)mp.size()), mp.size()+cnt);

}

int main(){
    cin >> N;
    A.resize(N,0);
    rep(i,N){
        cin >> A[i];
        if(A[i] >= 3200) cnt++;
        else mp[A[i]/400]++;        
    }

    solve();
}
