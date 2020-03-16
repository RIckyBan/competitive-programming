#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 505
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ansMax = 0, ansMin;
int N, d[MAXN], maxv = 0, maxIdx = 0;

void solve(){
    cout << ansMax << endl;

    if(ansMax - maxv >= maxv) ansMin = 0;
    else ansMin = 2*maxv - ansMax;
    
    cout << ansMin << endl;
}

int main(){
    cin >> N;

    rep(i, N){
        cin >> d[i];
        if(maxv <= d[i]){
            maxIdx = i;
            maxv = d[i];
        }
        ansMax += d[i];
    }

    solve();
}
