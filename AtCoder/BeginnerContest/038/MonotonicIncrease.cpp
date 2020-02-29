#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>

int N, a[100005]={}, l = 0, r = 0; 
ll cnt = 0;

void solve(){
    while(l < N){
        while(a[r+1] > a[r]) r++;
        cnt += r - l + 1;
        l++;
        if(l==r+1) r++;
    }
    cout << cnt << endl;
}

int main(){
    cin >> N;

    for(int i = 0; i < N; i++) cin >> a[i];

    solve();
}
