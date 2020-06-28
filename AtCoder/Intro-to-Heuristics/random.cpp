#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <random>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int D;
vi C, S[370], T, V, cost;

int calc_minus(int day){
    int res = 0;
    rep(i, 26){
        res += C[i] * (day - cost[i]); 
    }
    return res;
}

int calc_S(vi t){
    ll ans = 0;
    cost.resize(26, 0);

    rep(i, D){
        ans += S[i][t[i]-1];
        cost[t[i]-1] = i+1;
        ans -= calc_minus(i+1);
    }

    return ans;
}

int get_max_c(int day){
    int res = -1, tmp = 0;

    rep(i, 26){
        if(tmp < S[day][i] + C[i]){
            res = i;
            tmp = S[day][i] + C[i];
        }
    }

    return res;
}

vi generate_T(){
    vi tmpVec;
    rep(i, D){
        int tmpInt = rand() % 26 + 1;
        tmpVec.push_back(tmpInt);
    }
    return tmpVec;
}

void solve(){
    int Score = calc_S(T);

    rep(k, 100000){
        int tmpd = rand() % D;
        int tmpc = rand() % 26 + 1;
        int tmpScr;

        vi tmpT = generate_T();
        tmpScr = calc_S(tmpT);

        if(Score < tmpScr){
            Score = tmpScr;
            T = tmpT;
            // cout << Score << endl;
        }
    }

    rep(i, D) cout << T[i] << endl;
}

int main(){
    cin >> D;
    C.resize(26);
    T.resize(D, 1);
    
    
    rep(i, 26){
        cin >> C[i];
    }   

    rep(i, D){
        S[i].resize(26);
        rep(j, 26) cin >> S[i][j];
    }

    solve();
}
