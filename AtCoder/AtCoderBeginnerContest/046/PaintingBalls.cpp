#include <iostream>
#include<math.h>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int N, K;
  long int ans=1;

  cin >> N >> K;

  ans *= K;

  for(int i=1;i<N;i++){
    ans = ans*(K-1);
  }
  cout << ans << "\n";
}
