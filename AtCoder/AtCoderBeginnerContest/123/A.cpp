#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int A,B,C,D,E,K;

bool solve(){
    if(abs(A-B) > K) return false;
    else if(abs(A-B) > K) return false;
    else if(abs(A-C) > K) return false;
    else if(abs(A-D) > K) return false;
    else if(abs(A-E) > K) return false;
    else if(abs(B-C) > K) return false;
    else if(abs(B-D) > K) return false;
    else if(abs(B-E) > K) return false;
    else if(abs(C-D) > K) return false;
    else if(abs(C-E) > K) return false;
    else if(abs(D-E) > K) return false;

    return true;
}

int main(){
    cin >> A >> B >> C >> D >> E >> K;

    if(solve()) cout << "Yay!" << endl;
    else cout << ":(" << endl;
}
