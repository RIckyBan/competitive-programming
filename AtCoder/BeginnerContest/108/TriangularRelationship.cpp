#include <iostream>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int N,K;
  cin >> N >> K;

  int res = N%K;
  long long quo = N/K;

  if(K%2!=0)
    cout << quo*quo*quo << "\n";
  else{
    if(res < K/2)
      cout << 2*quo*quo*quo << "\n";
    else
      cout << quo*quo*quo + (quo+1)*(quo+1)*(quo+1) << "\n";
    }
  }
