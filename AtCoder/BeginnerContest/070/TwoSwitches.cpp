#include <iostream>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int A, B, C, D;

  cin >> A >> B >> C >> D;

  int Sec[101];
  for(int i = 0; i < 101; i++){
    Sec[i] = 0;
  }

  for(int i = A; i < B; i++){
    Sec[i] += 1;
  }

  for(int i = C; i < D; i++){
    Sec[i] += 1;
  }

  int ans = 0;

  for(int i = 0; i < 101; i++){
    if(Sec[i] == 2) ans+=1;
  }

  cout << ans << "\n";
}
