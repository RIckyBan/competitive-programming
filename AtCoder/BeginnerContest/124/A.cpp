#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll A,B, ans = 0;

void solve(){
    ans += max(A,B);

   if(ans == A)
        ans += max(B,A-1);
   else
        ans += max(A,B-1);     


    cout << ans << endl;
}

int main(){
    cin >> A >> B;

    solve();
}
