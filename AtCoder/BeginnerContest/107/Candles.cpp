#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

#define ll long long
#define vi vector<int>

ll N, K, ans = 1LL<<60, diff, buff, a[100005];

int main(){
    cin >> N >> K;

    for(int i = 0; i < N; i++) cin >> a[i];

    for(int i = 0; i + K - 1 < N;i++){
        ll left = a[i], right = a[i + K - 1];
        ans = min(ans, min(abs(left),abs(right))+right-left);
    }

    cout << ans << endl;
}
