#include <iostream>
#include <cmath>
#include <vector>
#include <string>

#define NUM 753

using namespace std;

int diff = NUM;


int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  string S;
  cin >> S;

  int length = S.length();

  for(int i = 0; i < (length-2); ++i){
    string buff = S.substr(i,3);

    diff = min(diff, abs(NUM - stoi(buff)));
  }

  cout << diff << endl;
}
