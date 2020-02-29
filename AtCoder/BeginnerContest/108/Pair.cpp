#include <iostream>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int K;

  cin >> K;

  if(K%2==0)
    cout << (K/2)*(K/2) << "\n";
  else
    cout << (K+1)/2*(K-1)/2 << "\n";
}
