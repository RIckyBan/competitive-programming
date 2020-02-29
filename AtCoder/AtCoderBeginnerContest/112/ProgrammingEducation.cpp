#include <iostream>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int N,buff,A,B;
  cin >> N;

  if(N == 1){
    cout << "Hello World" << endl;
  }
  else if(N == 2){
    cin >> A >> B;
    cout << A+B << endl;
  }
}
