#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int N, A, B;

int main(){
    cin >> N >> A >> B;

    cout << min(A,B) << " " << max(0, A+B-N) << endl;
}
