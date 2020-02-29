#include <iostream>
#include <cmath>
#include <vector>
#include <queue>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int N, K, diff, ans;
  priority_queue<int> Q;
  queue<int> q;

  cin >> N >> K;

  for(int i = 0; i < N; ++i){
    int buff;
    cin >> buff;
    Q.push(buff);
  }
  
  ans = 1000000000;

  for(int i = 0; i < K; ++i){//qの初期化
    q.push(Q.top());
    Q.pop();
  }

  for(int i = 0; i < (N-K+1); ++i){
    diff = q.front() - q.back();
    // cout << "diff: " << diff << endl;
    ans = min(ans, diff);

    q.pop();
    q.push(Q.top());
    Q.pop();
  }

  // cout << "ans: " << ans << endl;
  cout << ans << endl;
  return 0;
}
