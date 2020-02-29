#include <iostream>
#include <cmath>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N, d[105];

set<int> st;

int main(){
    cin >> N;

    rep(i,N) {
        cin >> d[i];
        st.insert(d[i]);
    }

    cout << st.size() << endl;
}
