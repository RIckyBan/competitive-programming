#include <iostream>
#include<math.h>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int N;
  long int ans=1;

  cin >> N;

  for(int i=1;i<=N;i++){
    ans = ans*i%(7+(int)pow(10,9));
  }
  cout << ans << "\n";
}
