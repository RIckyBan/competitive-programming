#include <iostream>
using namespace std;

int N,Cx,Cy;
long long H;

int x[100],y[100];
long long h[100];

long long calc(int Cx, int Cy, int x[], int y[], long long h[], int i){ //iは0~99
  return abs(Cx - x[i])+abs(Cy-y[i])+h[i];
}

bool check(int Cx, int Cy, int N){
  for(int i = 0; i < N-1; i++){
    if(calc(Cx, Cy, x, y, h, i)!=calc(Cx, Cy, x, y, h, i+1)) return false;
  }
  return true;
}

int main(){

  cin >> N; //Nは1~100

  for(int i=0; i < N; i++){
    cin >> x[i] >> y[i] >> h[i];
  }

  for(int i=0; i <= 100; i++){ //Cx,Cyについて総当たり
    for(int j = 0; j <= 100; j++){
      if(check(i,j,N)) cout << i << " " << j << " " << calc(Cx, Cy, x, y, h, 0) << endl;
    }
  }
}
