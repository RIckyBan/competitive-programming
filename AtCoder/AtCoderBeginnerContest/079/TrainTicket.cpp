#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string S;

void solve(){
    for(int bit = 0; bit < 1<<3; bit++){
        char op[3];
        int ans = S[0]-'0';
        for(int j = 0; j <= 2; j++){
            if(bit & 1<<j){
                op[j] = '+';
                ans += S[j+1]-'0';
            }
            else{
                op[j] = '-';
                ans -= S[j+1]-'0';
            }
        }
        if(ans == 7){
        for(int i = 0; i < 3; i++)
            cout << S[i] << op[i];
            cout << S[3] << "=" << ans << endl;
            break;
        }
    }
}

int main(){
    cin >> S;

    solve();
}
