#include<iostream>
#include<string>
#include <stack>
using namespace std;

void solve(string s, string t){
int rows = t.size();
int cols = s.size();
int L[3000 + 5][3000 + 5] = {0}; //L[t][s]の初期化

//テーブルLの更新
for(int r = 1; r <= rows; ++r){
for(int c = 1; c <= cols; ++c){
    if(s[c-1] == t[r-1]) L[r][c] = L[r-1][c-1]+1;
    else L[r][c] = max(L[r][c-1], L[r-1][c]);
}
}

// //テーブルの表示
// cout << "Ltable:" << endl;
// for(int row=0; row <= rows; ++row){
//   for(int col = 0; col <= cols; ++col){
//     cout << L[row][col];
//   }
//   cout << endl;
// }

int rid = rows, cid = cols, cnt=0;
int val = L[rid][cid];
stack <char> ans;

while(rid > 0 && cid > 0 && val > 0){
    if(val == L[rid-1][cid-1]+1){
        val--;
        // cout << "find: " << s[cid-1] << endl;
        cnt++;
        ans.push(s[cid-1]);
        rid--; cid--;
    }
    else {
        if(cid == 1) rid--;
        else cid--;
    }
}

if(cnt == 0) cout << "" << endl;
else {
    for(int i = 0; i < cnt;i++){
        cout << ans.top();
        ans.pop();
    }
    cout << endl;
    }    
}

int main(){
string s, t;

cin >> s >> t;

solve(s, t);
}
