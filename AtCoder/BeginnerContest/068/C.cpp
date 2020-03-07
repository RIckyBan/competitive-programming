#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <map>
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

int N, cnt = 0, k = 0;
vi As;
map<int, int> mp;

void solve(){
    sort(As.begin(), As.end());

    for(auto itr = mp.begin(); itr!=mp.end(); ++itr){
        if(itr->second % 2 == 1){
            itr->second = 1;
        } else {
            itr->second = 2;
            k++;
        }
        cnt += itr->second;
        // cout << itr->first << " " << itr->second << endl;
    }
    cnt -= k;
    if(k % 2 == 1 && cnt >= 3){
        cout << cnt - 1 << endl;
    } else {
        cout << cnt << endl;
    }
}

int main(){
    cin >> N;
    As.resize(N);

    rep(i, N){
        cin >> As[i];
        mp[As[i]]++;
    }

    solve();
}
