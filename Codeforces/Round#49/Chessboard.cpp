#include <iostream>
#include <math.h>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int n,q;
  int x[100000], y[100000];

  cin >> n >> q;

  for(int i = 0; i<q; i++){
    cin >> x[i];
    cin >> y[i];
    }

  for(int i = 0; i<q; i++){
    int dx = x[i] - 1;
    int dy = y[i] - 1;

    if(n%2==0){
      int ans = floor(1+2*dx+dy/2);
      if((x[i]+y[i])%2!=0) ans += n*n/2;
      cout << ans << "\n";
     }
    else{
      int ans = ceil((double)(1+n*dx+dy)/2.0);
      if((x[i]+y[i])%2!=0) ans += (n*n+1)/2;
      cout << ans << "\n";
      }
    }
  }
