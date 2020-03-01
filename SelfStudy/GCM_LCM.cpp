#include <iostream>
#include <cmath>

using namespace std;

#define ll long long

int N;
ll  T[105], ans = 1;

vector<int> enum_div(int n)//nの約数を列挙
{
	vector<int> ret;
	for(int i=1 ; i*i<=n ; ++i)
	{
		if(n%i == 0)
		{
			ret.push_back(i);
			if(i*i!=n)
			{
				ret.push_back(n/i);
			}
		}
	}
	return ret;
}

ll GCM(ll a, ll b){
    if(b==0) return a;

    return GCM(b, a % b);
}

ll LCM(ll a, ll b){
    ll ans_buff;

    if(a > b) ans_buff = (a / GCM(a, b)) * b;
    else ans_buff = (b / GCM(a, b)) * a;

    return ans_buff;
}

int main(){
    cin >> N;

    for(int i = 0; i < N; i++) cin >> T[i];

    for(int i = 0; i < N; i++) ans = LCM(ans, T[i]);

    cout << ans << endl;
}

