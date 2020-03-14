#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 200005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int N, a[MAXN], b[MAXN], tmp;
int V;
vector<pii> d[MAXN];


int calc_cost(int a, int b){ // from i to j
    bool flag = false;
    int cost;
    rep(i, d[a].size()){
        if(d[a][i].first == b){
            cost = d[a][i].second;
            flag = true;
            break;
        }
    }

    if(flag)
        return cost;
    else
        return INF;
}

void update_cost(int a, int b, int cost){
    bool flag = false;
    rep(i, d[a].size()){
        if(d[a][i].first == b){
            d[a][i].second = cost;
            flag = true;
            break;
        }
    }

    if(!false){
        d[a].push_back(make_pair(b, cost));
    }
}

void warshall_floyd() {
    for(int k = 0; k < N; k++) {
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                tmp = min(calc_cost(i, j), calc_cost(i, k) + calc_cost(k, j));
                update_cost(i, j, tmp);
            }
        }
    }
}

void print_table(){
    rep(i, N){
        // rep(j, d[i].size()){
        rep(j, N){
            // cout << "" << d[i][j].first << " " << d[i][j].second << " ";
            cout << "" << calc_cost(i, j) << " ";
        }
        cout << endl;
    }
}

void solve(){

    rep(i, N){
        d[a[i]].push_back(make_pair(b[i], 1));
        d[b[i]].push_back(make_pair(a[i], 1));
    }

    warshall_floyd();

    print_table();

    rep(i, N){
        for(int j = i; j < N; ++j){
            if(calc_cost(i, j)==3){
                cout << i << " " << j << endl;
            };
        }
    }

    rep(i, N){
        
        if(i == (N-1)) cout << endl;
        else cout << " ";
    }
}

int main(){
    cin >> N;

    rep(i, N){
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
    }

    solve();
}
