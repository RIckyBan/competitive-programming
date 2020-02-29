#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

int N, buff, ans=111;

int main(){
    cin >> N;
    int i = 0;
    while(ans * i < N) i++;

    cout << ans * i << endl;
}
