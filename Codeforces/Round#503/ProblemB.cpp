#include <iostream>
#include <vector>

using namespace std;

int ans;

bool Who(int (&badge)[1000]){
  for(int i = 1; i <= sizeof(badge); i++){
    if(badge[i]==2){
      ans = i;
      return true;
    }
  }
  return false;
}

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);//高速化、endlは使わない

  int n;
  int pup[1000]={};

  cin >> n;
  for(int i = 1; i<=n; i++){
    cin >> pup[i];
  }

  for(int i = 1; i<=n; i++){
    int badge[1000] = {};
    int index = i;
  while(!Who(badge)){
    badge[index] += 1 ;
    index = pup[index];
    }
    cout << ans << " ";
    //cout << badge[0] << badge[1] << badge[2] << badge[3] << "\n";
  }
  cout << "\n";

}
