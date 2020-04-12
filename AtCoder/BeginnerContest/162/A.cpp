#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans;
bool flag = false;
string N;

void solve(){
    rep(i, 3){
        if(N[i] == '7') flag = true;
    }

    if(flag)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;
}

int main(){
    cin >> N;

    solve();
}
