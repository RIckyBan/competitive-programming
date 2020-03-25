#include <iostream>
#include <cmath>
#include <vector>
#include <map>
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

ll ans;
int N;
vi P;
string pre;
vector<string> S;
vector<pair<string, pii>> vec;
stack <int> st;

void solve(){
    rep(i, N){
        pii tmp = make_pair(P[i], i+1);
        vec.push_back(make_pair(S[i], tmp));
    }

    sort(vec.begin(), vec.end());

    pre = vec[0].first;

    rep(i, vec.size()){
        // cout << pre << endl;
        if( pre == vec[i].first) {
            st.push(vec[i].second.second);
        } else {
            while(!st.empty()){
                int num = st.top();
                cout << num << endl;
                st.pop();
            }
            pre = vec[i].first;
            st.push(vec[i].second.second);
        }

        // cout << vec[i].first << vec[i].second.first << endl;
    }

    while(!st.empty()){
        int num = st.top();
        cout << num << endl;
        st.pop();
    }
}

int main(){
    cin >> N;
    S.resize(N);
    P.resize(N);

    rep(i, N){
        cin >> S[i] >> P[i];
    }

    solve();
}
