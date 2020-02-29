#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){

  int M;
  double km;

  cin >> M;
  km = M / 1000.0;

  if(km < 0.1) cout << "00" << endl;
  else if(km < 1.0) cout << "0" << km*10 << endl;
  else if(km <= 5.0) cout << km*10 << endl;
  else if(km <= 30.0) cout << km + 50 << endl; 
  else if(km <= 70.0) cout << (km-30)/5 + 80 << endl;
  else cout << "89" << endl;
}
