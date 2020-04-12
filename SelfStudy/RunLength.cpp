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

char tmp;
int N, cnt = 0;
string S, ans = "";

void solve(){
    N = S.size();

    rep(i, N){
        if(i==0){
            tmp = S[i];
            cnt++;
        } else {
            if(tmp == S[i]){
                cnt++;
            } else {
                ans += to_string(cnt);
                ans += tmp;

                tmp = S[i];
                cnt = 1;
            }
        }
    }

    ans += to_string(cnt);
    ans += tmp;

    cout << ans << endl;
}

int main(){
    cin >> S;

    solve();
}
