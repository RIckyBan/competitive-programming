#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define MAXS 8005
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

string S;
int X, Y;
vi vert, hori;
bool dp[MAXS][MAXS];

bool check(int goal, vi vec){
    int n = vec.size();

    fill(dp[0], dp[n], 0);

    dp[0][0] = 1;

    for(int i = 1; i <= n; i++){
        int val = vec[i-1];
        
        rep(j,MAXS){
            if(dp[i-1][j] == 1){
                if(j-val>=0) dp[i][j-val] = 1;
                if(j+val<MAXS) dp[i][j+val] = 1;
            }
        }
    }

    return dp[n][goal];
}

int main(){
    cin >> S >> X >> Y;
    if(S[S.size()-1]!='T') S += 'T'; //パディング

    int tmp = 0;
    bool state = true;

    rep(i, S.size()){
        if(S[i] == 'F'){
            tmp++;
        } else {
            if(state)
                hori.push_back(tmp);
            else
                vert.push_back(tmp);
            tmp = 0;
            state = !state;
        }
    }

    X -= hori[0];
    hori.erase(hori.begin()); //初期値だけシフトして対称性を保つ
    X = abs(X);
    Y = abs(Y);
    // printf("goal: (%d,%d)\n",X,Y);

    // printf("vertical: ");
    // rep(i,vert.size())
    //     cout << vert[i] << " ";
    // cout << endl;

    // printf("horizontal: ");
    // rep(i,hori.size())
    //     cout << hori[i] << " ";
    // cout << endl;

    if(check(Y,vert) && check(X, hori)) cout << "Yes" << endl;
    else cout << "No" << endl;
}
