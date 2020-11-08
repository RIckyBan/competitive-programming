#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <sstream>
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

int N;
string S, tmp;
vector<string> T, vec, ans;

bool is_match(string a, string b){
    if(a.size() == b.size()){
        rep(i, a.size()){
            if(a[i] != b[i] && b[i] != '*'){
                return false;
            }
        }
    } else {
        return false;
    }

    return true;
}

void solve(){
    // cout << S << endl;

    stringstream ss{S};             

    while (getline(ss, tmp, ' ') ){    
        vec.push_back(tmp);
    }

    rep(i, vec.size()){
        bool flag = true;

        rep(j, T.size()){
            if(is_match(vec[i], T[j])){
                string tmp = "";
                rep(k, T[j].size()){
                    tmp += '*';
                }
                ans.push_back(tmp);
                flag = false;
                break;
            }
        }
        if(flag){
            ans.push_back(vec[i]);
        }
    }

    rep(i, ans.size()){
        cout << ans[i];
        if(i == ans.size()-1) cout << endl;
        else cout << " ";
    }
}

int main(){
    getline(cin, S);

    cin >> N;

    T.resize(N);
    

    rep(i, N){
        cin >> T[i];
    }

    solve();
}
