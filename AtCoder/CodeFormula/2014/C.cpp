#include <iostream>
#include <cmath>
#include <map>
#include <string>
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

string S;

map<string, int> dict;

void solve(){

}

int main(){
    while(1){
        cin >> S;
        if(cin.eof()) break;

        // cout << S << endl;
        rep(i, S.size()-1){
            if(S[i]=='@' && 'a' <= S[i+1] && S[i+1] <= 'z'){
                string user = "";
                while('a' <= S[i+1] && S[i+1] <= 'z'){
                    user += S[i+1];    
                    i++;
                }
                dict[user]++;
            }
        }
    }
    // solve();
     for(auto itr = dict.begin(); itr != dict.end(); ++itr) {
         cout << itr->first << endl;
    }
}
