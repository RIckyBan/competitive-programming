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

ll S;
int a, b;



void solve(){
    for(ll i = sqrt(S); 0 < i; --i){
        if(S % i == 0){
            a = i, b = S / i;
            break;
        }
    }

    cout << 0 << " " << 0 << " ";
    cout << a << " " << 0 << " ";
    cout << 0 << " " << b << endl;

}

int main(){
    cin >> S;

    solve();
}
