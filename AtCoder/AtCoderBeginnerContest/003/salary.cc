#include <iostream>

using namespace std;

int N;

int main(){
    cin >> N;
    int ans = 10000*N*(N+1)/(2*N);
    cout << ans << endl;
}