#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define NUM 1000000007

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N;
string acgt = "ACGT";

bool check(string S){
    
}

ll dfs(string S, int n){
    ll ret = 0;
    
    if(n == 0){
        return 1;
    }
    else{
        rep(i,4) ret += dfs(S + acgt[i], n - 1);
    }
    return ret % NUM;
}

int main(){
    cin >> N;

    cout << dfs("", N) << endl;
}
