#include<iostream>
#include<vector>
#include<string>

bool check(std::vector<char> v,int n){
  int k,count = 0;

  if(v[0]!='A')//先頭はAか?
    return false;

  for (int i = 2; i < (n-1); i++)
    {
      if((v[i]) == 'C')
      {
        count += 1;
        k = i;
      }
  }
  if (count != 1)//Cの数は1個か?
    return false;

  v.erase(v.begin()+k);v.erase(v.begin());

  //AとC以外は小文字か?
  for (int i = 0; i < v.size();i++){
    if ('a' > v[i] || 'z' < v[i])
      return false;
  }

  return true;
}

int main(){
  std::string s;
  std::cin >> s;
  std::vector<char> v;
  int n = s.size();

  for (int i = 0; i < n;i++)
    v.push_back(s[i]);

  if(check(v,n)){
    std::cout << "AC" << std::endl;
  } else {
    std::cout << "WA" << std::endl;
  }
}
