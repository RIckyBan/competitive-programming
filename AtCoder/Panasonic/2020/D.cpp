#include <iostream>
#include <cmath>
#include <queue>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define psi pair < string, int>

queue<psi> Q;

ll ans;
int N, k;
string st;

void dfs(){
    if(N==1){
        cout << "a" << endl;
        return;
    }

    Q.push(make_pair("a", 1));

    while(!Q.empty()){
        psi tmp = Q.front();
        Q.pop();
        k = tmp.second;

        rep(i, k+1){
            st = tmp.first;
            char c = 'a' + i;
            st += c;
            
            if(st.size() == N)
                cout << st << endl;
            else{
                if(i==k)
                    Q.push(make_pair(st, k+1));
                else
                    Q.push(make_pair(st, k));
            }
        }
    }
}

// void recurr_enum(string st, int k){
//     if(st.size() == N){
//         cout << st << endl;
//         return;
//     }

//     rep(i, k+1){
//         char tmp = 'a' + i;
//         string buff = st + tmp;
//         if(i==k)
//             recurr_enum(buff, k+1);
//         else
//             recurr_enum(buff, k);
//         }
//     }

void solve(){
    // recurr_enum("a", 1);
    dfs();
}

int main(){
    cin >> N;

    solve();
}
