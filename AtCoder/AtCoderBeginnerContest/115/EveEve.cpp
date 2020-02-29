#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int N, p[10], sum=0, max, max_index;

  cin >> N;

  for(int i = 0; i < N; ++i){
    int buff;
    cin >> buff;
    p[i] = buff;
  }

  max = 0;

  for(int i = 0; i < N; ++i){
    sum += p[i];
    if(max < p[i]){
      max = p[i];
      max_index = i;
    }
  }

  cout << (sum - p[max_index]/2) << endl;
}
