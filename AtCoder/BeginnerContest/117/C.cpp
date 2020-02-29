#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, buff, ans=0;
vector<int> X, diff;

int main(){
    cin >> N >> M;

    for(int i = 0; i < M; i++) {
        cin >> buff;
        X.push_back(buff);
    }
    
    sort(X.begin(), X.end());
    
    // for(int i = 0; i < M; i++) cout << X[i] << " ";
    // cout << endl;

    for(int i = 0; i < M-1; i++)
        diff.push_back(X[i+1] - X[i]);

    sort(diff.begin(), diff.end());
    reverse(diff.begin(), diff.end());

    // for(int i = 0; i < M-1; i++) cout << diff[i] << " ";
    //     cout << endl;

    for(int i = N-1; i < M-1; i++)
        ans += diff[i];

    cout << ans << endl;
}
