#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int D;

  cin >> D;

  if (D==25) cout << "Christmas" << "\n";
  else if(D==24) cout << "Christmas Eve" << "\n";
  else if(D==23) cout << "Christmas Eve Eve" << "\n";
  else if(D==22) cout << "Christmas Eve Eve Eve" << "\n";
}
