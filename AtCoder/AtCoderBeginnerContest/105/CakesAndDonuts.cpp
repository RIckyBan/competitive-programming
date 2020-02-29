#include <iostream>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int N;
  bool can = false;

  cin >> N;

  for(int i=0; i <= N/7;i++){
    for(int j=0; j <= N/4;j++){
      if (4*j + 7*i == N) can = true;
    }
  }


  if (can) cout << "Yes" << "\n";
  else cout << "No" << "\n";
}
