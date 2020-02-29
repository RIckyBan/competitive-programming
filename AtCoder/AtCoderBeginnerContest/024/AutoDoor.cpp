#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>

int  N, T, a[100005];
ll Tsum=0;

void solve(){
    for(int j = 0; j < N-1; j++){
        int diff = a[j+1] - a[j];
        Tsum += min(T,diff);
    }
    Tsum += T;
    cout << Tsum << endl;
}

int main(){
    cin >> N >> T;

    for(int i = 0; i < N; i++) cin >> a[i];

    solve();
}
