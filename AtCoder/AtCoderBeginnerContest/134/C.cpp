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

ll ans;
int N,tmp, maxv, secondmaxv;
vi As,inp;

void solve(){
    rep(i,inp.size()){
        if(inp[i] == maxv)
            cout << secondmaxv << endl;
        else
            cout << maxv << endl;
    }
}

int main(){
    cin >> N;

    rep(i,N){
        cin >> tmp;
        inp.push_back(tmp);
        As.push_back(tmp);
    }

    sort(As.begin(),As.end());
    reverse(As.begin(),As.end());

    maxv = As[0];
    secondmaxv = As[1];

    solve();
}
