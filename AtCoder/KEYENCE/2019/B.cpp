#include <iostream>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

int N, A[1e5 + 5], B[1e5 + 5], C[1e5 + 5], D[1e5 + 5];

bool check(){
  for(int i = 0; i < N; i++) if(C[i] < B[i]) return false;
  return true;
}

int solve(){
  while(!check()){

  }
}

int main(){
  cin >> N;
  for(int i < 0; i < N;i++) {
    cin >> A[i];
    C[i] = A[i];
  }
  for(int i < 0; i < N;i++) {
    cin >> B[i];
  }
  
  cout << solve() << endl;
}
