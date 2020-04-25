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

ll ans = 0, cnt, N;
string S;
char cur;
vector<ll> nums;

ll calcSum(ll n){
    return (0+n)*(n+1)/2;
}

void solve(){
    cur = S[0];
    cnt = 1;

    for(int i = 1; i < N; ++i){
        if(S[i] == cur){
            cnt++;
        } else {
            if(S[i] == '>'){
                nums.push_back(cnt);
                cnt = 1;
                cur = S[i];
            } else {
                nums.push_back(-cnt);
                cnt = 1;
                cur = S[i];
            }
        }
    }

    if(S[N-1] == '>'){
        nums.push_back(-cnt);
    } else {
        nums.push_back(cnt);
    }

    for(auto v: nums){
        // cout << v << endl;
        ans += calcSum(abs(v));
    }

    for(int i = 0; i < nums.size()-1; ++i){
        if(nums[i] > 0 && nums[i+1] < 0) ans -= min(abs(nums[i]), abs(nums[i+1]));
    }

    cout << ans << endl;
        
}

int main(){
    cin >> S;

    N = S.size();

    solve();
}
