#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

string divide[4] = {"dream", "dreamer", "erase", "eraser"};


bool judge(string& S) {
  //cout << S << "\n";

  if(S.length()==0)
    return true;

  for(int i = 0;i < 4;i++){
    string d = divide[i];
    if(S.substr(0,d.size()) == d){
      S.erase(S.begin(),S.begin()+d.size());
      return judge(S);
    }
  }
    return false;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  string S,T;
  cin >> S;

  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; ++i) reverse(divide[i].begin(), divide[i].end());

  if(judge(S)) cout << "YES\n";
  else cout<< "NO\n";
}
