#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 10005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int N;
string w[MAXN], tmp;
vector<string> ans;

bool isNotException(char c){
    if(c < 'a' || 'z' < c) return false;

    string expt = "aeiouy";

    rep(i, 6){
        if(c == expt[i]) return false;
    }

    return true;
}

char charToInt(char c){
    if(c == 'b' || c == 'c') return '1';
    else if(c == 'd' || c == 'w') return '2';
    else if(c == 't' || c == 'j') return '3';
    else if(c == 'f' || c == 'q') return'4';
    else if(c == 'l' || c == 'v') return '5';
    else if(c == 's' || c == 'x') return '6';
    else if(c == 'p' || c == 'm') return '7';
    else if(c == 'h' || c == 'k') return '8';
    else if(c == 'n' || c == 'g') return '9';
    else if(c == 'z' || c == 'r') return '0';
}

string convertWord(string word){
    string res = "";

    rep(i, word.size()){
        if(isNotException(word[i]))
            res.push_back(charToInt(word[i]));
    }

    return res;
}

void solve(){
    rep(i, N){
        // cout << w[i] << endl;
        tmp = convertWord(w[i]);
        if(tmp.size())
            ans.push_back(tmp);
    }

    rep(i, ans.size()) {
        cout << ans[i];
        if(i == ans.size()-1) cout << endl;
        else cout << " ";
    }

    if(!ans.size()) cout << endl;
}

int main(){
    cin >> N;
    rep(i, N){
        cin >> w[i];
        transform(w[i].begin(), w[i].end(), w[i].begin(), ::tolower);
    }
    
    solve();
}
