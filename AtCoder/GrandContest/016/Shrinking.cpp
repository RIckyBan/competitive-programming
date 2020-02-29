#include <iostream>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

string S;
ll cnt, ans=INF;
map<char, int> MP;
char g;

bool isOK(string s){
    rep(i, s.size())
        if(s[i] != s[0]) return false;
    
    return true;
}

void solve(){
    rep(i,S.size())
        MP[S[i]]++;
    
    if(MP.size()==1)
        ans = 0;
    else{
        for(auto itr=MP.begin(); itr!=MP.end(); itr++){
            cnt = 0;
            string S_buff = S;
            g = itr->first;
        
            // cout << "g is " << g << endl;

            while(!isOK(S_buff)){
                cnt++;

                string buff = "";

                rep(i,S_buff.size()-1){
                    if(S_buff[i] == g|| S_buff[i+1] == g)
                        buff.push_back(g);
                    else
                        buff.push_back(S_buff[i]);
                }
                S_buff = buff;
            }
            // cout << S_buff << endl;

            ans = min(cnt,ans);
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> S;

    solve();
}
