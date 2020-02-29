#include <iostream>
#include<math.h>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  long a, b, x;

  cin >> a >> b >> x;

  if (a > 0)  cout << b/x - (a-1)/x << "\n";
  else cout << b/x+1 << "\n";
}
