#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXH 2005
#define MAXW 2005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll H, W, ans = 0, numH, numW;
int idx;
string M[MAXH];
vi vert[MAXW], hori[MAXH];

void preprocess(){

    rep(j, W){
        vert[j].push_back(0);

        rep(i, H){
            if(M[i][j]=='#') vert[j].push_back(i+1);
        }

        vert[j].push_back(H+1);

        // for(auto& v: vert[j])
        //     cout << v << " ";
        // cout << endl;
    }

    rep(i, H){
        hori[i].push_back(0);

        rep(j, W){
            if(M[i][j]=='#') hori[i].push_back(j+1);
        }

        hori[i].push_back(W+1);

        // for(auto& v: hori[i])
        //     cout << v << " ";
        // cout << endl;
    }
}

void solve(){
    preprocess();

    rep(i, H){
        rep(j, W){
            if(M[i][j]=='#') continue;
            
            // cout << i << ", " << j << endl;

            auto posH = lower_bound(hori[i].begin(), hori[i].end(), j+1);  
            idx = distance(hori[i].begin(), posH);
            // cout << j+1 << " is idx " << idx << endl;
            numH = hori[i][idx] - 1 - hori[i][idx-1];
            
            // cout << hori[i][idx] - 1<< " - " << hori[i][idx-1] << endl;

            auto posW = lower_bound(vert[j].begin(), vert[j].end(), i+1);  
            idx = distance(vert[j].begin(), posW);
            // cout << i+1 << " is idx " << idx << endl;
            numW = vert[j][idx] - 1 - vert[j][idx-1];

            // cout << vert[j][idx] - 1<< " - " << vert[j][idx-1] << endl;
            // cout << "(" << numH  << ", " << numW <<  ")" << endl;

            ans = max(ans, numH+numW-1);
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> H >> W;

    rep(i, H){
            cin >> M[i];
    }

    solve();
}
