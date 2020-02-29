#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct pt {
  int x;
  int y;
};

pt p[3];

pt subtr(pt a, pt b);
double cross(pt a, pt b);

int main(){
  for(int i = 0; i < 3; ++i){
    cin >> p[i].x >> p[i].y;
  }

  pt e1 = subtr(p[1], p[0]);
  pt e2 = subtr(p[2], p[0]);

  printf("%.1f\n",cross(e1, e2)/2.0);
}

pt subtr(pt a, pt b){
  pt buff;
  buff.x = a.x - b.x; buff.y = a.y - b.y;
  return buff;
}

double cross(pt a, pt b){
  return abs(a.x*b.y - a.y*b.x);
}