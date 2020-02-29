#include <iostream>
#include <math.h>

using namespace std;
int thr = (int)pow(10,9) + 7;

long long factorial (int M){
  long long ans=1;
  for(int i = 1; i <= M;i++)
    ans = ans*i%thr;
  return ans;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない


  int N,M;
  cin >> N >> M;
  if( (N-1 <= M) && (M <= N+1)){
    if(N==M)
      cout << (factorial(N)*factorial(M)*2)%thr << "\n";
    else
      cout << (factorial(N)*factorial(M))%thr << "\n";
  }
  else
    cout << 0 << "\n";
}
