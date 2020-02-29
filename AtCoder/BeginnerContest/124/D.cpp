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
#define pii pair<int, int>

#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll N,K,cnt;
int l,r, ans = 0;
string S;
vector<pii> ranges;

void solve(){
    ranges.push_back(make_pair(0,1));

    S.push_back('1');
    bool flag = false; //Counting?

    rep(i,N+1){
        if(S[i]=='0' && !flag){
            l = i+1;
            // cout << "l is " << l << endl;
            flag = true;
        }
        else if(S[i]=='1' && flag){
            r = i+1;
            // cout << "r is " << r << endl;
            ranges.push_back(make_pair(l,r));
            flag = false;
        }
    }

    ranges.push_back(make_pair(N+1,N+2));

    // rep(i,ranges.size())
    //     printf("(%d, %d)\n",ranges[i].first, ranges[i].second);

    cnt = ranges.size() - 2;
    K = min(cnt, K);

    // printf("cnt: %lld, K: %lld\n",cnt, K);

    rep(i, cnt - K + 1)
        ans = max(ranges[i+K+1].first - ranges[i].second, ans);

    cout << ans << endl;
}

int main(){
    cin >> N >> K >> S;

    solve();
}
