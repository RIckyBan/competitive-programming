#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int n,h,a,b,k;
  int ta[1000],fa[1000],tb[1000],fb[1000];

  cin >> n >> h >> a >> b >> k;
  for(int i = 0; i<k; i++){
    cin >> ta[i] >> fa[i] >> tb[i] >> fb[i];
  }

  for(int i=0;i<k;i++){
    int hor, ans;

    if (ta[i]==tb[i]) hor=0;
    else hor = abs(ta[i]-tb[i]);

    if(fa[i] > b && fb[i] > b){
      ans = hor + fa[i] - b + fb[i] -b;
    }
    else if(fa[i] < a && fa[i] < a){
      ans = hor + a - fa[i] + a - fb[i];
    } else
      ans = hor + abs(fa[i]-fb[i]);

    cout << ans << "\n";
  }
}
