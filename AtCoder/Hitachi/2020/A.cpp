#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans;
int A,B,C;
string S;
bool flag = true;

void solve(){
   rep(i, S.length()){
       if(i%2==0){
           if(S[i]!='h'){
            flag = false;
            break;
           }
       } else {
           if(S[i]!='i'){
            flag = false;
            break;
           }
       }
   }
    if(S[S.length()-1]=='h')
        flag = false;

   if(flag)
       cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main(){
    cin >> S;

    solve();
}
