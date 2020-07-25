#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll A,B,C,K,cnt=0;
bool flag;

void solve(){
    
    while(B <= A){
        B *= 2;
        cnt++;
    }

    while(C <= B){
        C *= 2;
        cnt++;
    }

    if(cnt <= K) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

int main(){
    cin >> A >> B >> C >> K;

    solve();
}
