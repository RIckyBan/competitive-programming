#include <iostream>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int A, B, C;

  cin >> A >> B >> C;

  bool flag = false;

  for(int i=0; i < B; i++){
    if((A*i)%B == C) flag =  true;
  }

  if (flag)  cout << "YES" << "\n";
  else cout << "NO" << "\n";
}
