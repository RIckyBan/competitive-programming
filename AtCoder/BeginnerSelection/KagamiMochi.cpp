#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int N,buff;
  vector<int> d;
  cin >> N;
  for(int i = 0;i < N;i++){
    cin >> buff;
    d.push_back(buff);
  }

  sort(d.begin(),d.end());
  d.erase(unique(d.begin(), d.end()), d.end());

  cout << d.size() <<"\n";
}
