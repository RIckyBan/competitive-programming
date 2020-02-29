#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

int N, ans = 0;
string S;

void solve(){
    for(int i = 1; i < N;i++){
        int cnt = 0;
        string X = S.substr(0,i);
        string Y = S.substr(i,N-i);
        for(int j = 0; j < 27; j++){
            char buff = 'a'+j;
            if(X.find(buff) != string::npos && Y.find(buff) != string::npos) cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}

int main(){
    cin >> N >> S;

    solve();
}
