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

ll N, sum[2] = {};
string S, odd = "" ,even = "";

void solve(){
    N = S.size();

    if(N==1) cout << 0 << endl;
    else{
        rep(i,N){
            if(i%2==0)
                even.push_back(S[i]-'0');
            else
                odd.push_back(S[i]-'0');
        }

        rep(i, even.size()) sum[0] += even[i];
        rep(i, odd.size()) sum[1] += odd[i];

        // printf("sum[0]: %lld, sum[1]: %lld\n",sum[0],sum[1]);

        cout << min(sum[0]+odd.size()-sum[1], sum[1]+even.size()-sum[0]) << endl;
    }
}

int main(){
    cin >> S;

    solve();
}
