#include <iostream>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int X, Y;

  cin >> X >> Y;

  int S = X + Y/2;

  cout << S << "\n";
}
