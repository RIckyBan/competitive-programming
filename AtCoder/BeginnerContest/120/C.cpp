#include <iostream>
#include <cmath>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

string S;
stack<int> stk; 
int x, y, cnt = 0;

void solve(){
    stk.push(S[0]);
    
    int N = S.size();

    for(int i = 1; i < N; i++){
        if(stk.empty() || S[i]==stk.top())
            stk.push(S[i]);
        else{
            if(!stk.empty()){
                stk.pop();
                cnt += 2;
            }
        }
    }
    cout << cnt << endl;
}

int main(){
    cin >> S;

    solve();
}
