#include <iostream>
#include <cmath>
#include <stack>
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

stack<char> st;

ll cnt;
string S;
char tmp;

void solve(){
    st.push(S[0]);

    for(int i = 1; i < S.size(); ++i){
        if(!st.empty())
            tmp = st.top();
        else
            tmp = '0';

        if(tmp == 'S' && S[i]=='T'){
            cnt++;
            st.pop();
        } else
            st.push(S[i]);
    }

    cout << S.size() - 2*cnt << endl;
}

int main(){
    cin >> S;

    solve();
}
