#include <iostream>
#include <cmath>
#include <vector>
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

vector<string> ans;
string tmp;

int main(){
    while(cin >> tmp){
        ans.push_back(tmp);
    }

    rep(i, ans.size()){
        cout << ans[i];
        if(i == ans.size()-1) cout << endl;
        else cout << ",";
    }

    return 0;
}
