#include <iostream>
#include <bitset>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int N, K, A[100005], bits[64][2] = {}, maxv = 0, ans = 0;

void solve(){
    for(int i = 0; i < N; i++){
        bitset<8> buff(A[i]);
        for(int j = 0; j < 8; j++){
            bits[j][buff[j]]++;
        }
    }

    int max_bit = 0;

    int K_buff = K;

    for(int j = 63; j >= 0; j--){
        if(pow(2, j) <= K){
            bool bit_buff = 0;
            if(bits[j][0] > bits[j][1] && K_buff > pow(2, j)) bit_buff = 1; 
            ans += pow(2,j) * bits[j][!bit_buff];
            K_buff -= pow(2, j)*bit_buff;
            printf("(K, ans) = (%d, %d)\n",K ,ans);
        }
    }
    
    cout << ans << endl;
}

int main(){
    cin >> N >> K;

    for(int i = 0; i < N; i++) {
        cin >> A[i];
        maxv = max(maxv, A[i]);
    }
    
    solve();
}
