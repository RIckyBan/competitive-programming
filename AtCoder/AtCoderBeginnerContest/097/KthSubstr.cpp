#include <iostream>
#include <cmath>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll K;
string S;

set<char> ST;
set<string> STR;

void solve(){
    for(auto itr=ST.begin(); itr!= ST.end(); itr++){
        char buff = *itr;
        // cout << "Checking: " << buff << endl;
        rep(i,S.size()){
            if(S[i]==buff){
                rep(j,K){
                    if(i+j+1 <= S.size())
                        STR.insert(S.substr(i,j+1));
                }
            }
        }
    if(STR.size() >= K) break;
    }

    // printf("---STR---\n");
    // for(auto itr=STR.begin(); itr!= STR.end(); itr++){
    //     cout << *itr << endl;
    // }

    // printf("---ANS---\n");
    auto it=STR.begin();
    rep(i,K-1)
        it++;
    cout << *it << endl;
}

int main(){
    cin >> S >> K;

    string idx(S);
    sort(idx.begin(),idx.end());

    rep(i,idx.size())
        ST.insert(idx[i]);

    // printf("---ST---\n");
    // for(auto itr=ST.begin(); itr!= ST.end(); itr++){
    //     cout << *itr << endl;
    // }

    solve();
}
