#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 4005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll ans = 0;
int k, N, idx;
string S;
vi R, G, B, vec;
char leftC;

map<char, int> dic[MAXN];

char colorLeft(char c1, char c2){
    if((c1 == 'R' && c2 == 'G') || (c1 == 'G' && c2 == 'R')) return 'B';
    else if((c1 == 'R' && c2 == 'B') || (c1 == 'B' && c2 == 'R')) return 'G';
    else return 'R';
}

void solve(){
    for(int i = 0; i < N; ++i){
        for(int j = i+1; j < N; ++j){
            if(S[i] == S[j]) continue;

            leftC = colorLeft(S[i], S[j]);

            ans += dic[j+1][leftC];

            if(2 * j - i < N && S[2 * j - i] == leftC) ans--;
        }
    }

    cout << ans << endl;
}

int main(){
    cin >> N >> S;

    map<char, int> tmp;

    for(int i = N; i >= 1; --i){
        dic[i] = tmp;
        tmp[S[i-1]]++;
    }

    dic[0] = tmp;

    solve();
}
