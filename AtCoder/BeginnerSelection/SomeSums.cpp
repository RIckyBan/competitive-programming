#include <iostream>
#include <vector>
#include<numeric>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int N,A,B;
  vector<int> store;

  cin >> N >> A >> B;

  for(int i=0; i <= N; i++){
    int sum=0;
    int num=i;

    do{
      int res = num%10;
      num = num/10;
      sum += res;
    }while(num != 0);

    if(sum >= A && sum <= B) {
      store.push_back(i);
      }
    }


    cout << accumulate(store.begin(), store.end(), 0) << "\n";
}
