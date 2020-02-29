#include <iostream>

using namespace std;

int X, Y;

int main(){
    cin >> X >> Y;
    int ans = X > Y ? X:Y;
    cout << ans << endl;
}