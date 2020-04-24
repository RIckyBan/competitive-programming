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

ll ans = 0;
string S;
int w, cur;
vi id_B, id_W;

void solve(){
    cur = w-1;
    rep(i, w){
        if(S[i]=='B') id_B.push_back(i);
        else id_W.push_back(i);
    }

    reverse(id_B.begin(), id_B.end());

    rep(i, id_B.size()){
        ans += cur - id_B[i];
        --cur;        
    }

    cout << ans << endl;
}

int main(){
    cin >> S;
    
    while(S[S.size()-1] == 'B') S.pop_back();

    w = S.size();

    solve();
}
