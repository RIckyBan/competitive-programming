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

ll N, ans = 0;

ll enum_div_sum(ll n)//nの約数を列挙
{
	ll ret = 0;

	for(ll i=1 ; i*i<=n ; ++i)
	{
		if(n%i == 0)
		{
			ret += i;
			if(i*i!=n)
			{
				ret += n/i;
			}
		}
	}

	return ret;
}

void solve(){
    ans = enum_div_sum(N);

    if(ans == 2*N){
        cout << "Perfect" << endl;
    } else if(ans > 2*N) {
        cout << "Abundant" << endl;
    } else{
        cout << "Deficient" << endl;
    } 
}

int main(){
    cin >> N;

    solve();
}
