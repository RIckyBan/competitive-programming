#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int N, L[15];

void solve(){
    int max_l = L[0];

    int sum = 0;
    for(int i = 1; i < N; i++) sum += L[i];

    if(max_l < sum) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main(){
    cin >> N;
    for(int i = 0; i < N; i++)  cin >> L[i];
    sort(L, L+N);
    reverse(L, L+N);

    solve();
}
