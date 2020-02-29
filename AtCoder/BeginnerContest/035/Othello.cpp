#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int N, Q;
int L, R;
vector<int> vec;

void solve(){
    int cur = 1;
    bool color = true;
    for(auto itr = vec.begin(); itr!=vec.end();itr++){
        while(cur < *itr){
            if(color) cout << 1;
            else cout << 0;
            cur++;
        }
        color = !color;
    }
    cout << endl;
}

int main(){
    cin >> N >> Q;
    vec.push_back(0);
    vec.push_back(N+1);
    for(int i = 0; i < Q; i++){
        cin >> L >> R;
        vec.push_back(L);
        vec.push_back(R+1); //[L,R+1)で管理
    }
    sort(vec.begin(), vec.end());

    solve();
}
