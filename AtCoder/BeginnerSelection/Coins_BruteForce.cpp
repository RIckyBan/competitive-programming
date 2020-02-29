#include<iostream>
using namespace std;


int SolveCoin(int a, int b, int c, int x){

  int count = 0;

  for(int i = 0; i <= a;i++){
    for(int j = 0;j <= b;j++){
      for(int k = 0;k <= c;k++){
        if(x==500*i+100*j+50*k) count ++;
      }
    }
  }
  return count;
}

int main(){
  int a,b,c,x;

  //標準入力
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;
  std::cin >> x;
  a = std::min(a, x/500);
  b = std::min(b, x/100);
  c = std::min(c, x/50);

  //力ずくで計算
  cout <<  SolveCoin(a,b,c,x) << endl;
}
