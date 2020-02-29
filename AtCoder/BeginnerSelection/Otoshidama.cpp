//1 秒間で処理できる for 文ループの回数は、10^8=100,000,000回程度なので
// シンプルなfor文だと厳しい

#include <iostream>
using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない
  int N, Y, x, y, z;

  cin >> N >> Y;

  for(x=0;x <= N; x++){
    for(y=0; y <= N-x; y++){
      int total = 10000*x + 5000*y + 1000*(N - x - y);
      if(total == Y) {
        printf("%d %d %d\n",x,y,N - x - y);
        return 0;
      }
    }
  }
  printf("-1 -1 -1\n");
}
