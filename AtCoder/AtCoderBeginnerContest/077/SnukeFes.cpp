#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

int N;
ll cnt_A[100005]={0}, cnt_C[100005]={0}, ans=0;
vector<int> A, B ,C;

void solve(){
    for(int i = 0; i < N; i++){
        auto itrA = lower_bound(A.begin(), A.begin()+N, B[i]);
        cnt_A[i] = itrA - A.begin(); 
        
        auto itrC = upper_bound(C.begin(), C.begin()+N, B[i]);
        cnt_C[i] = N - (itrC - C.begin());
        
        ans += cnt_A[i] * cnt_C[i];
    }

    cout << ans << endl;
}

int main(){
    cin >> N;

    int buff;
    for(int i = 1; i <= N; i++){
        cin >> buff;
        A.push_back(buff);
    } 
    for(int i = 1; i <= N; i++){
        cin >> buff;
        B.push_back(buff);
    }
    for(int i = 1; i <= N; i++){
        cin >> buff;
        C.push_back(buff);
    }
 
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    sort(C.begin(),C.end());
    
    solve();
}
