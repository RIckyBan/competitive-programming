#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int cnt = 0;
ll g, A, B, C;
const int MAX = 15001000;
bool IsPrime[MAX];
int MinFactor[MAX];


ll GCD(ll a, ll b){
    if(b==0) return a;

    return GCD(b, a % b);
}

map<int, int> factorize(ll n)// 素因数分解
{
	map<int, int> ret;
	for(ll i = 2; i*i <= n; ++i) // iがllじゃないと無限ループになる!
	{
        if(n % i != 0) continue;

		while(n % i == 0){
			ret[i]++;
			n /= i;
		}
	}
	if(n != 1) ret[n]++;
	
	return ret;
}

void solve(){
    g = GCD(A, B);

    map<int, int> mp = factorize(g);

    for(auto itr = mp.begin(); itr != mp.end(); ++itr)
        cnt++;
    cnt++;

    cout << cnt << endl;
}

int main(){
    cin >> A >> B;

    solve();
}
