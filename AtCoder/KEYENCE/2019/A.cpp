#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool flag[4] = {0};
int N[4];

bool can(){
  for(int i = 0; i < 4; i++){
    if(N[i] == 1 && !flag[0]) flag[0] = true;
    else if(N[i] == 7 && !flag[1]) flag[1] = true;
    else if(N[i] == 9 && !flag[2]) flag[2] = true;
    else if(N[i] == 4 && !flag[3]) flag[3] = true;
    else return false;
  }
  return true;
}

int main(){

  cin >> N[0] >> N[1] >> N[2] >> N[3];

  if (can()) cout << "YES" << endl;
  else cout << "NO" << endl;
}
