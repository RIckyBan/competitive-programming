#include <iostream>
#include <vector>
#include <map>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N, ans = 0;
vi A;
map<int, int> mp;

void solve(){
    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        if(itr->first <= itr->second )
            ans += itr->second - itr->first;
        else
            ans += itr->second;
    }
    cout << ans << endl;
}

int main(){
    cin >> N;
    A.resize(N);

    rep(i,N) {
        cin >> A[i];
        mp[A[i]]++;
    }

    solve();
}
