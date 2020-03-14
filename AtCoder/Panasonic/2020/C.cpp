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

ll A, B, C, D;
bool flag = false;

void solve(){
    D = C - A - B;
    
    cout << pow(D, 2) << endl;
    cout << D * D << endl;
    
    if(D > 0 && 4*A*B < D*D) {
        flag = true;
    }

    if(flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

}

int main(){
    cin >> A >> B >> C;

    solve();
}
