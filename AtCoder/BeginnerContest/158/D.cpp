#include <iostream>
#include <cmath>
#include <deque>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXQ 200005
#define MAXM 200005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int Q, T[MAXQ], F[MAXQ], cnt = 0, curR = 0, curL = 0;
char tmp, C[MAXQ];
string S, ans="";
deque<char> l, r;

void solve(){
    rep(i, Q){
        if(T[i]==1){
            cnt--;
        } else {
            if(F[i]==1){
                if(cnt%2==0)
                    l.push_back(C[i]);
                else
                   r.push_back(C[i]);
                curL++;
            } else {
                if(cnt%2==0)
                   r.push_back(C[i]);
                else
                   l.push_back(C[i]);
            }
        }
    }


    while(!l.empty()){
        tmp = l.back();
        ans += tmp;
        l.pop_back();
    }

    ans += S;

    while(!r.empty()){
        tmp = r.front();
        ans += tmp;
        r.pop_front();
    }

    cout << ans << endl;
}

int main(){
    cin >> S >> Q;

    rep(i ,Q){
        cin >> T[i];
        if(T[i]==2){
            cin >> F[i] >> C[i]; 
        } else {
            cnt++;
        }
    }

    if(cnt % 2 != 0)
        reverse(S.begin(), S.end());

    // cout << S << endl;

    solve();
}
