#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

#define NIL -1

int N,M,Q,s,t;
vi T[100005], Color;

void dfs(int r, int c){
    stack<int> S;
    S.push(r);
    Color[r] = c;
    while(!S.empty()){
        int u = S.top(); S.pop();
        rep(i, T[u].size()){
            int v = T[u][i];
            if(Color[v] == NIL){ //色が違っていたらスタックに入れて探索する
                Color[v] = c;
                S.push(v);
            }
        }
    }
}

void AssignColor(){
    int id = 1;

    Color.resize(N,NIL);

    rep(u,N){ //色が違っていたらスタックに入れて探索する
        if(Color[u] == NIL) dfs(u,id++); //dfsでノードに色(=id)をつける
    }
}

void solve(int s, int t){
    if(Color[s] == Color[t]) cout << "yes" << endl;
    else cout << "no" << endl;
}

int main(){
    cin >> N >> M;

    rep(i,M){
        cin >> s >> t;
        T[s].push_back(t);
        T[t].push_back(s);
    };

    AssignColor();

    cin >> Q;

    rep(i,Q){
        cin >> s >> t;
        solve(s, t);
    };
}
