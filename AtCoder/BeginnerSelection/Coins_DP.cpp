#include<iostream>
#include <vector>


using namespace std;

vector<vector<vector<vector<int> > > > dp = vector<vector<vector<vector<int> > > >(20001,vector<vector<vector<int> > >(51, vector<vector<int> >(51, vector<int>(51, -1))));

//再帰関数
int SolveCoin(int a, int b, int c, int x){
  int res=0;//内部変数

  if(dp[x][a][b][c]!= -1) return dp[x][a][b][c];//すでに計算していたら参照

  if(x != 0){ //x==0ならresは0のまま
    if(a > 0){
      for(int i = 0;i <= a;i++){
        res += SolveCoin(0,b,c,x-500*i);
      }
    } else if(b > 0){
      for(int i = 0;i <= b;i++){
        res += SolveCoin(0,0,c,x-100*i);
      }
    } else {
      for(int i = 0;i <= c;i++){
        if(i*50 == x) res = 1;
        else res = 0;
      }
    }
  }

  return dp[x][a][b][c] = res;
  }

int main(){
  int a,b,c,x;

  //標準入力
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> x;
  a = min(a, x/500);
  b = min(b, x/100);
  c = min(c, x/50);

  //再帰的に計算・判定
  cout <<  SolveCoin(a,b,c,x) << endl;
}
