#include <iostream>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int N,K;

  cin >> N >> K;

  int answer;

  if (N % K == 0) answer=0;
  else answer = 1;
  cout << answer << "\n";
}
