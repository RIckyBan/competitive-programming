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

ll cnt = 0;
int N, H, tmpA, tmpB, tmp;
vi a, b;

void solve(){
    while(H > 0){
        // cout << H << endl;

        tmpA = a[a.size()-1];
        if(b.empty())
            tmpB = 0;
        else
            tmpB = b[b.size()-1];

        // cout << tmpA << " " << tmpB << endl;

        if(tmpB >= tmpA){
            H -= tmpB;
            b.pop_back();
            cnt += 1;
        } else {
            tmp =(H+tmpA-1)/tmpA;
            // cout << tmp << endl;
            cnt += tmp;
            H = 0;
        }

        // cout << cnt << endl;
    }

    cout << cnt << endl;
}

int main(){
    cin >> N >> H;
    a.resize(N);
    b.resize(N);
 
    rep(i, N){
        cin >> a[i] >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    solve();
}
