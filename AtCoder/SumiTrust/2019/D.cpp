#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans = 0;
string S;
int N;

bool is_in_S(string num) {
    int id = 0;

    rep(i, N) {
        if(S[i] == num[id]) {
            if(id == 2) {
                return true;
            }
            id++;
        }
    }
    return false;
}

void solve(){
    for(char i = '0'; i <= '9'; ++i) {
        for(char j = '0'; j <= '9'; ++j) {
            for(char k = '0'; k <= '9'; ++k) {
                char num_org[] = {i, j, k};
                string num(num_org, end(num_org));
                if(is_in_S(num)) ans++;
            }
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> N >> S;

    solve();
}
