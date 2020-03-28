#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 2005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans;
int N,X,Y;
map<int, int> mp;

int d[MAXN][MAXN];

// void warshall_floyd() {
//     for(int i = 0; i < N; i++) {
//         for(int j = i+1; j < N; j++) {
//             for(int k = 0; k < N; k++) {
//                     d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
//                     d[j][i] = d[i][j];
//             }
//         }
//     }

// }

int calc_dist(int i, int j){
    if(i == X && j == Y) return 1;

    if( (i <= X && j <= X) || ( Y <= i && Y <= j))
        return abs(i - j);
    else {
        int tmp = abs(X - i) + 1 + abs(Y - j);

        return min(abs(i - j), tmp);
    }    
}

void solve(){
    rep(i, N){
        for(int j = i+1; j < N; ++j){
            // cout << "Node " << i << " to " << j << ": " << d[i][j] << endl;
            mp[calc_dist(i, j)]++;
        }
    }

    // for(auto itr = mp.begin(); itr!=mp.end(); ++itr){
    //     cout << itr->first << " " << itr->second << endl;
    // }

    auto itr = mp.begin();
    for(int i = 1; i < N; ++i){
        if(itr->first == i){
            cout << itr->second << endl;
            ++itr;
        } else
            cout << 0 << endl;
    }
 

}

int main(){
    cin >> N >> X >> Y;
    --X, --Y;

    rep(i, N)
        fill(d[i], d[i]+N, INF);

    rep(i, N-1){
        d[i][i] = 0;
        d[i][i+1] = 1;
        d[i+1][i] = 1;
    }

    d[X][Y] = 1;
    d[Y][X] = 1;

    solve();
}
