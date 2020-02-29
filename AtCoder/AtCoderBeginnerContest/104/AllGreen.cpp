#include<iostream>
#include<cmath>
using namespace std;

#define ll long long

ll G;
int D, P[11] = {0}, C[11] = {0};

long long res = 1<<29;

void solve(){
  for(int bit = 0; bit < (1<<D); ++bit){
    long long sum = 0;
    long long num = 0;
    for(int i = 0; i < D; ++i){
      if(bit & (1<<i)) sum += C[i] + P[i]*100*(i+1), num += P[i];
    }
    if(sum >= G) res = min(res, num);
    else{
      for(int i = D-1; i >= 0; --i){
        if (bit & (1<<i)) continue;
        for(int j = 0; j <= P[i]; ++j){
          if(sum >= G) break;
          sum += 100*(i+1);
          ++num;
        }
      }
      res = min(res, num);
    }
  }
  cout << res << endl;
}

int main(){
  cin >> D >> G;

  for(int i = 0; i < D; i++){
    cin >> P[i] >> C[i];
  }

  solve();
}