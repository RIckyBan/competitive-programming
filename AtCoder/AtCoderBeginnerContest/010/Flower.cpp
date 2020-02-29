#include <iostream>

using namespace std;

int N, a[10], ans = 0;

int Pluck(int n){
    int ans = n;    
    while(ans%3==2 || ans%2==0) ans--;
    return n - ans;
}

int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    for(int i = 0; i < N; i++){
        ans += Pluck(a[i]);
    }
    cout << ans << endl;
}