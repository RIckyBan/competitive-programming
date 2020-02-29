#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <set>
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

bool check(int goal, vi vec){
    int val;
    set<int> prev;
    prev.insert(0); //原点

    rep(i,vec.size()){
        set<int> dp;
        val = vec[i];
        for (auto itr = prev.begin(); itr != prev.end(); ++itr){
            dp.insert(*itr+val);
            dp.insert(*itr-val);
        }
        swap(prev, dp);
    }

    return prev.count(goal);
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
