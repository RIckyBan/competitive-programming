#include <iostream>
#include <cmath>
#include <vector>
#include <deque>
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

ll N;
vi A;
int k;
deque<int> ans;

void solve(){
    ans.push_back(A[0]);

    if(N % 2 == 0){
        for(int i = 1; i < N; ++i){
             if(i % 2 == 1)
                ans.push_front(A[i]);
            else
                ans.push_back(A[i]);
        } 
    } else {
        for(int i = 1; i < N; ++i){
            if(i % 2 == 1)
                ans.push_back(A[i]);
            else
                ans.push_front(A[i]);      
            }
        } 

    k = ans.size();

    rep(i, k){
        cout << ans[i];
        if(i==k-1) cout << endl;
        else cout << " ";
    }
}

int main(){
    cin >> N;
    A.resize(N);

    rep(i, N) cin >> A[i];

    solve();
}
