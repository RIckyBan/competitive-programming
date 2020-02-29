#include <iostream>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int x1,y1,x2,y2,x3,y3,x4,y4;

  cin >> x1 >> y1 >> x2 >> y2;

  int dx = x2 - x1;
  int dy = y2 - y1;

  x3 = x2 - dy; y3 = y2 + dx;
  x4 = x1 - dy; y4 = y1 + dx;

  cout << x3 << " " << y3 << " " << x4 << " " << y4 << "\n";
}
