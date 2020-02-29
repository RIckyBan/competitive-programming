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

ll N;
string pref, suff;

void solve(){
    if(pref == suff) pref = "";
    else{
        rep(i,N){
            // cout << pref.substr(i, N-i) << " & " << suff.substr(0, N-i) << endl;
            if(pref.substr(i, N-i) == suff.substr(0, N-i)){
                suff.erase(i,N-i);
                break;
            }
        }
    }
    cout << (pref + suff).size() << endl;
}

int main(){
    cin >> N >> pref >> suff;

    solve();
}
