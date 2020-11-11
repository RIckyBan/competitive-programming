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

ll ans, neg = 0;
int N, num = 0;
vi A,B,diff;

void solve(){
   if(num == 0){
        cout << num << endl;
        return;
    }

    ll tmp = 0;
    rep(i, N){
        tmp += diff[i];
    }
    if(tmp < 0){
        cout << -1 << endl;
        return;
    }

    sort(diff.begin(), diff.end(), greater<int>());

    // for(auto v: diff){
    //     cout << v << endl;
    // }

    int idx = 0;
    while(neg < 0){
        neg += diff[idx];
        num++;
        idx++;
    }

    cout << num << endl;
}

int main(){
    cin >> N;
    A.resize(N);
    B.resize(N);
    diff.resize(N);

    rep(i, N){
        cin >> A[i];
    }
    rep(i, N){
        cin >> B[i];
    }

    rep(i, N){
        diff[i] = A[i] - B[i];
        if(diff[i] < 0){
            neg += diff[i];
            num++;
        }
    }

    solve();
}
