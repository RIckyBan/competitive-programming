//N = 1でもKと一致していれば問題ない
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N, K, A[100005], max_v = 0;

int GCM(int a, int b){
    if(b==0) return a;

    return GCM(b, a % b);
}

bool solve(){
    rep(i, N)
        max_v = max(max_v, A[i]);

    int gcm = A[0];

    for(int i = 1; i < N; i++){
        gcm = GCM(gcm, A[i]);
    }

    if(K % gcm == 0 && K <= max_v) return true;
    else return false;
}

int main(){
    cin >> N >> K;

    rep(i,N)
        cin >> A[i];

    if(solve())
        cout << "POSSIBLE" << endl;
    else
        cout << "IMPOSSIBLE" << endl;
}
