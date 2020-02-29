#include <iostream>
#include <cmath>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long

int N, cnt=0;
string A, B, C;
set<char> MP;

void solve(){
    for(int i = 0; i < N; i++){
        char buff_a = A[i];
        char buff_b = B[i];
        char buff_c = C[i];

        if(buff_a == buff_b && buff_b == buff_c) continue;
        else if(buff_a == buff_b || buff_b == buff_c || buff_c == buff_a) cnt += 1;
        else cnt += 2;
    }
    cout << cnt << endl;
}

int main(){
    cin >> N >> A >> B >> C;

    solve();
}
