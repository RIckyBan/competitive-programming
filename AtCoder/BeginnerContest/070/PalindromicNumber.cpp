#include <iostream>
#include <string>

using namespace std;

string num, reverse_num = "";

int main(){
  cin >> num;
  string buff = num;

  while(!buff.empty()){
    reverse_num.push_back(buff.back());
    buff.pop_back();
  }
  string ans = num == reverse_num ? "Yes" : "No";
  cout << ans << endl;
}
