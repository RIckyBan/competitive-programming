#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int N, s[105]={};
ll ans = 0, score_sum = 0;

void solve(){
    if(score_sum % 10 != 0) ans = score_sum;
    else{
        rep(i,N){
            if((score_sum - s[i]) % 10 != 0) //条件を満たせば更新する
                ans = max(ans, score_sum - s[i]);
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> N;

    rep(i, N){
        cin >> s[i];
        score_sum += s[i];
    }

    solve();
}
