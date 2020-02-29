#include<iostream>

using namespace std;

int RecursiveCoin(int a, int b, int c, int x){
  int count = 0;

  if(x==0){
    count += 1;
  }else if(a > 0){
    for(int i = 0; i < a+1; i++){
      if(x < 0) continue;
      //printf("\naを%d枚使う場合\n",i);
      count += RecursiveCoin(0,b,c,x);
      //printf("\n引数1 a:%d, b:%d, c:%d, x:%d, count:%d\n",i,b,c,x,count);
      x -= 500;
    }

  }else if(b > 0){
    for(int i = 0; i < b+1; i++){
      if(x < 0) continue;
      //printf("bを%d枚使う場合\n",i);
      count += RecursiveCoin(0,0,c,x);
      //printf("引数2 a:%d, b:%d, c:%d, x:%d, count:%d\n",a,i,c,x,count);
      x -= 100;
    }

  }else if(c > 0){
    if (c >= x/50 && x%50==0)
      count += 1;
    }

  return count;
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
  cout <<  RecursiveCoin(a,b,c,x) << endl;
}
