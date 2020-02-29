#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll N;
int cnt, ans = INF, id, diff;
string S;

// int count_diff(string s1, string s2){

// }

int assign_leader(int id){
    int tmp = 0;

    rep(i,N){
        if(i < id){
            if(S[i]!='E')
                tmp++;
        } else if (i > id){
            if(S[i]!='W')
                tmp++;
        }
    }

    return tmp;
}

void solve(){
    cnt = assign_leader(0);
    ans = min(cnt, ans);

    for(int id = 0; id < N-1; id++){
        diff = (int)(S[id]!='E') - (int)(S[id+1]!='W');
        cnt += diff;
        ans = min(cnt, ans);
    }

    cout << ans << endl;
}

int main(){
    cin >> N >> S;

    solve();
}
