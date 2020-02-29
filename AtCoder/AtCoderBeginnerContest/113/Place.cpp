#include <iostream>
#include <cmath>
#include <funciton>
#include <algorithm>
using namespace std;

int main(){

  int N, T, A, answer=0;
  int H[1001];
  double diff_target = 200.0, diff[1001];

  cin >> N >> T >> A;

for (int i = 0; i < N; i++) {
  cin >> H[i];
}

for(int i = 0; i < N; i++){
  diff[i] = abs(T - H[i]*0.006 - A);
  diff_target = diff[answer];
    if(diff[i] < diff_target)
      answer = i;
}
  cout << answer+1 << endl;
}
