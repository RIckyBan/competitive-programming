#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool check(string s, int len){
  for(int j = 0; j < len/2; j++)
    if((s[j] - s[len-1-j])!= 0 & (s[j] - s[len-1-j])!= 2 & (s[j] - s[len-1-j])!= -2) return false;

  return true;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int T;
  int len[50];
  string s[50];

  cin >> T;

  for(int i = 0; i<T; i++){
    cin >> len[i];
    cin >> s[i];
    }

  for(int i = 0; i<T; i++){
    if(check(s[i],len[i])) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    }
  }
