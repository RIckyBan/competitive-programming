#include <stdio.h>
#include <iostream>
#include <map> 
#include <set>

using namespace std;

#define ll long long
#define vi vector<int>

ll N;
int buff, a[100005];
map<int, int> mp;
set<int> st;

void solve(){
    int cnt=0;
    for (auto itr = st.begin(); itr != st.end(); ++itr){
        mp[*itr]=cnt;
        cnt++;
    }

    for(int i = 0; i < N; i++)
        cout << mp[a[i]] << endl;

}

int main(){
    scanf("%lld",&N);
    for(int i = 0; i < N; i++){
        scanf("%d",&a[i]);
        st.insert(a[i]);
    }

    solve();
}
