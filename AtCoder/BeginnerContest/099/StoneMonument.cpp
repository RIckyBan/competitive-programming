#include <iostream>

using namespace std;

int A, B;

int recur_sum(int N){
    if(N==1) return 1;
    return N + recur_sum(N-1);
}

void solve(){
    int diff = B - A;

    cout << recur_sum(diff) - B << endl;
}

int main(){
    cin >> A >> B;

    solve();
}
