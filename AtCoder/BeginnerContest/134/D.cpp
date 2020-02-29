#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N,tmp,M=0;
vi As, bxs, states, divs, ans;
bool flag;

vi enum_div(int n)//nの約数を列挙
{
	vi ret;
	for(int i=1 ; i*i<=n ; ++i)
	{
		if(n%i == 0)
		{
			ret.push_back(i);
			if(i!=1 && i*i!=n)
			{
				ret.push_back(n/i);
			}
		}
	}
	return ret;
}

void solve(){
    bxs.resize(N+1);
    states.resize(N+1);

    for(int i = N; i >= 1; --i){
        flag = true;
        int val, quo;

        if(i > N/2){
            val = As[i];
        } else {
            quo = states[i] % 2;
            if(quo == As[i])
                val = 0;
            else
                val = 1;
        }

        bxs[i] = val;

        divs = enum_div(i);

        rep(i, divs.size()){
            states[divs[i]] += val;
        }
    }

    for(int i = 1; i < bxs.size(); ++i){
        M += bxs[i];
        if(bxs[i]) ans.push_back(i);
    }

    cout << M << endl;
    rep(i,ans.size()) cout << ans[i] << endl;

}

int main(){
    cin >> N;

    As.push_back(0); //1-indexにする

    rep(i,N){
        cin >> tmp;
        As.push_back(tmp);
    }

    solve();
}
