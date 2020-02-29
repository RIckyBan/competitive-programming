#include <iostream>
#include <vector>
#include<algorithm> //忘れない!
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない
  int N,buff;
  int Alice = 0;int Bob = 0;

  vector<int> a;
  cin >> N;
  a.push_back(0);//a[0]は使わない
  for(int i = 0; i < N;i++){
    cin >> buff;
    a.push_back(buff);
  }

  std::sort(a.begin(),a.end(),greater<int>());



  for(int i = 0; i <= N;i++){
    //cout << a[i] << "\t";
    if(i%2==0)
      Alice += a[i];
    else
      Bob += a[i];
  }

  //cout << "\n";
  //cout << "Alice: " << Alice << "\n";
  //cout << "Bob: " << Bob << "\n";
  cout << Alice-Bob << "\n";
}
