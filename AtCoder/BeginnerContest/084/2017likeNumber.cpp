#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAX 101010
#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int Q, l ,r;
vi vec,a,s;
vector<bool> is_prime;

void eratosthenes_sieve(){
    is_prime.resize(MAX,1);

    is_prime[0] = false, is_prime[1] = false;

    for(int i = 2; i < MAX; i++){
        if(!is_prime[i]) continue;
        for(int j = i*2; j < MAX; j+=i) is_prime[j] = 0;
    }
}

void solve(){
    eratosthenes_sieve();

    a.resize(MAX,0);
    rep(i, MAX){ //2017likeか?
        if(i % 2 == 0) continue;
        if(is_prime[i] && is_prime[(i+1)/2]) a[i] = 1;
    }

    s.resize(MAX+1,0);
    for(int i = 0; i < MAX; i++)  //s[i+1] = a[i]までの和
        s[i+1] = a[i] + s[i];
}

int main(){
    solve();

    cin >> Q;

    rep(i,Q){
        cin >> l >> r;
        ++r;

        cout << s[r] - s[l] << endl;
    }
}
