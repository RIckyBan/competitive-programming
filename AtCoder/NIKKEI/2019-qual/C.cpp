#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define pll pair<ll, ll>

ll N, A[100005], B[100005];
ll ans = 0;
vector<pll> vec;

void solve(){
    for(int i = 0; i < N; i++){
        int id = vec[i].second;
        if(i % 2 == 0)
            ans += A[id];
        else 
            ans -= B[id];
    }
    cout << ans << endl;
}

int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> A[i] >> B[i];
        vec.push_back(make_pair(A[i]*A[i] + B[i]*B[i], i));
    }
    
    sort(vec.begin(), vec.end());

    solve();
}
