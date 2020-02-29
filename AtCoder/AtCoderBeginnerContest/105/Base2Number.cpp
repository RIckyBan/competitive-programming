#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;

vector<int> vec;

void rec(int N){
  if(N==0) vec.push_back(0);
  else{
  int quo = N/(-2);
  int rem = N%(-2);
  if(rem == -1 && N < 0){
    quo += 1;
    rem += 2;
  }
  // printf("(quo, rem) = (%d, %d)\n",quo,rem);

  vec.push_back(rem);

  if(quo == 1)
    vec.push_back(quo);
  else
    rec(quo);
  }
}

void solve(){
  rec(N);

  reverse(vec.begin(),vec.end());
  
  for(auto itr = vec.begin(); itr!=vec.end(); itr++)  cout << *itr;

  cout << endl;
}

int main(){
  cin >> N;

  solve();
}
