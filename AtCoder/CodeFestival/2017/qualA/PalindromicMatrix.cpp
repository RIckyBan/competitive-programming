#include <iostream>
#include <cmath>
#include <map>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pic pair<int,char>

int H,W,g1,g2,g4;
string S;
priority_queue<pic> Q;
map<char, int> mp;

bool solve(){
    int m = H/2, n = W/2;
    g4 = m * n;

    if(H%2 == 1 && W%2 == 1){
        g2 = m + n;
        g1 = 1;
    }else if (H%2 == 0 && W%2 == 0){
        g2 = 0;
        g1 = 0;
    } else {
        if(H%2==0)
            g2 = H;
        else
            g2 = W;
        g2 /= 2; 
        g1 = 0;
    }

    pic tmp;
    char key;
    int val;

    // printf("(g4,g2,g1) = (%d,%d,%d)\n",g4,g2,g1);

    rep(i, g4){
        tmp = Q.top();
        key = tmp.second, val = tmp.first;
        Q.pop();
        if(val < 4)
            return false;
        val -= 4;
        Q.push(pic(val,key));
    }

    rep(i, g2){
        tmp = Q.top();
        key = tmp.second, val = tmp.first;
        Q.pop();
        if(val < 2)
            return false;
        val -= 2;
        Q.push(pic(val,key));
    }

    rep(i, g1){
        tmp = Q.top();
        key = tmp.second, val = tmp.first;
        Q.pop();
        if(val < 1)
            return false;
        val -= 1;
        Q.push(pic(val,key));
    }

    return true;
}

int main(){
    cin >> H >> W;

    rep(i,H){
        cin >> S;
        rep(j,W)
            mp[S[j]]++;
    }

    for (auto itr=mp.begin(); itr!=mp.end();++itr)
        Q.push(pic(itr->second, itr->first));

    if(solve()) cout << "Yes" << endl;
    else cout << "No" << endl;
}
