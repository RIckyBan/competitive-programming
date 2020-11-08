#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans;
int A,B,N;
string S;

void solve(){
    int passed_a = 0, passed_b = 0;

    rep(i, N){
        if(passed_a + passed_b < A + B){
            if(S[i] == 'a') {        
                cout << "Yes" << endl;
                passed_a++;
            } else if (S[i] == 'b' && passed_b < B) {
                cout << "Yes" << endl;
                passed_b++;
            } else {
                cout << "No" << endl;
            }
        } else {
            cout << "No" << endl;
        }
    }
}

int main(){
    cin >> N >> A >> B >> S;

    solve();
}
