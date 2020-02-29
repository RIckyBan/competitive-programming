#include<iostream>
#include<vector>
#include<string>

using namespace std;

int H, W;

void mineDetect(int cor[52][52], vector<string> S){
   for(int i = 1; i < H+1; i++){
     for(int j = 1; j < W+1; j++){
       if(i*j*(i-H-1)*(j-W-1)!= 0){
         if(S[i][j-1]=='#'){
           cor[i][j] = -9;
           cor[i-1][j-1] += 1;
           cor[i-1][j] += 1;
           cor[i-1][j+1] += 1;
           cor[i][j-1] += 1;
           cor[i][j+1] += 1;
           cor[i+1][j-1] += 1;
           cor[i+1][j] += 1;
           cor[i+1][j+1] += 1;
         }
       }
     }
   }

   for(int i = 1; i < H+1; i++){
     for(int j = 1; j < W+1; j++){
       if(cor[i][j]<0) cout << '#';
       else cout << cor[i][j];

       if(j==W) cout << "\n";
     }
   }
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない


  cin >> H >> W;

  int cor[52][52];

  for(int i = 0; i < H+2; i++){//配列の初期化
    for(int j = 0; j < W+2; j++){
      cor[i][j] = 0;
    }
  }

  vector<string> S;
  S.push_back("NULL");

  for (int i = 0; i < H;i++){
    string buff;
    cin >> buff;
    S.push_back(buff);
  }

  mineDetect(cor,S);

}
