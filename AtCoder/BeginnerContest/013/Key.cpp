#include <iostream>
#include <cmath>

using namespace std;

int A, B;

int main(){
    cin >> A >> B;    

    int ans = min(abs(A-B), 10 - A + B);
    ans = min(ans, 10 - B + A);

    cout << ans << endl;

}