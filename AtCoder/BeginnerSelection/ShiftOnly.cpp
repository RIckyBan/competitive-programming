#include<iostream>
#include<vector>

bool check(int n, std::vector<int> v){
  for(int i =0;i<n;i++){
    if (v[i]%2!=0)
      return false;
  }
  return true;
}

int RecursiveCalc(int n, std::vector<int> v, int count){
  //偶数判定
  if(check(n,v)){
    count += 1;
    //演算・更新
    for(int i =0;i<n;i++){
      v[i]=v[i]/2;
    }
    //再帰呼び出し
    return RecursiveCalc(n,v,count);
  }
  else {
  return count;
  }
}

int main(){
  //回数を保持
  int count=0;
  int n;

  //標準入力
  std::cin >> n;
  std::vector<int> v(n);

  for (int i = 0;i < n; i++){
    std::cin >> v[i];
  }

  //再帰的に計算・判定
  std::cout <<  RecursiveCalc(n,v,count) << std::endl;
}
