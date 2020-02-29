//Goal:s(i , j) = # のときマス s(i , j) を黒色, s(i , j) = . のときマス s( i , j ) を白色にする

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int H, W;

bool canPaint(string S[52]){

  for(int i = 1; i < H+1; i++){
    for(int j = 1; j < W+1; j++){
      int num = 0; //マス周囲の#の数
      if(S[i][j]=='#'){//#のあるマスそれぞれについて判定を行う

        if((S[i][j-1]=='#')||(S[i][j+1]=='#')||(S[i-1][j]=='#')||(S[i+1][j]=='#'))
          num += 1;

        if(num == 0){
            //printf("cor(%d,%d) doesn't meet requirements\n",i,j);
            return false;
          } else{
            //printf("cor(%d,%d) num of #: %d\n",i,j,num);
          }
        }
      }
    }
    return true;
  }


int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  cin >> H >> W;

  string S[52];
  S[0] = "..................................................";

  for (int i = 1; i < H+1;i++){
    string buff;
    cin >> buff;
    S[i] = "."+buff+".";
  }
  S[51] = "..................................................";

  if(canPaint(S)) cout << "Yes" << "\n";
  else cout << "No" << "\n";
}
