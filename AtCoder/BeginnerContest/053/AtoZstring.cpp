#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

string S;
ll N, head, tail;

void solve(){
    N = S.size();

    rep(i,N){
        if(S[i] == 'A'){
            head = i;
            break;
        }
    }

    for(int i = N-1; i >= 0; i--){
        if(S[i] == 'Z'){
            tail = i;
            break;
        }
    }

    cout << tail - head + 1 << endl;
}

int main(){
    cin >> S;

    solve();
}
