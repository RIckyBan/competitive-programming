#include <iostream>
#include <bitset>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 15
#define MAXM 15
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans = 0;
int N, M, tmp, num[MAXM];
vi K, S[MAXM]; 
bool P[MAXM], flag;


void solve(){
    for(int i = 0; i < (1 << N); i++) {
        fill(num, num+M, 0);
        flag = true;

		for(int j = 0; j < N; j++) {
			if(i & (1 << j)){
                rep(k, S[j].size()){
                    num[S[j][k]]++;
                }
            };
		}

        rep(k, M){
            if(num[k] % 2 != P[k]) flag = false;
        }

        if(flag){
            ans++;
            cout << bitset<10>(i) << endl;
        } 
    }

    cout << ans << endl;
}

int main(){
    cin >> N >> M;

    K.resize(M);

    rep(i, M){
        cin >> K[i];
        rep(j, K[i]){
            cin >> tmp;
            tmp--;
            S[i].push_back(tmp);
        }
    }

    rep(i, M) cin >> P[i];

    solve();
}
