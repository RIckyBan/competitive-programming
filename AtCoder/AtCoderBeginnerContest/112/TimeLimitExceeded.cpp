#include <iostream>
using namespace std;

int main(){
  int N,T;
  int minimum = 1000;
  bool inTime = false;
  int c[1001],t[1001];

  cin >> N >> T;

  for(int i=0; i < N; i++){
    cin >> c[i] >> t[i];
  }

  for(int i=0; i < N; i++){
    if(t[i] <= T){
      inTime = true;
      minimum = min(minimum,c[i]);
    }
  }

  if(inTime)
    cout << minimum << endl;
  else
    cout << "TLE" << endl;
}
