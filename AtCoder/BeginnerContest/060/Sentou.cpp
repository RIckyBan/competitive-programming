#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int N, T; 
long long ans = 0;
vector<int> vec;

void solve(){
    long long cnt = 0;
    for(int i = 1; i < N; i++){
        cnt += min(T, vec[i]-vec[i-1]);
    }
    cnt += T;
    cout << cnt << endl;
}

int main(){
    cin >> N >> T;
    int buff;
    for(int i = 0; i < N; i++) {
        cin >> buff;
        vec.push_back(buff);
    }
    solve();
}
