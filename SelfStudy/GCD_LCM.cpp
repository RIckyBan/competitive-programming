#include <iostream>
#include <cmath>
#include <map>

using namespace std;

#define ll long long

int N;
ll  T[105], ans = 1;

const int MAX = 15001000;
bool IsPrime[MAX];
int MinFactor[MAX];


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

vector<int> preprocess(int n = MAX) {
    vector<int> res;
    for (int i = 0; i < n; ++i) IsPrime[i] = true, MinFactor[i] = -1;
    IsPrime[0] = false; IsPrime[1] = false; 
    MinFactor[0] = 0; MinFactor[1] = 1;
    for (int i = 2; i < n; ++i) {
        if (IsPrime[i]) {
            MinFactor[i] = i;
            res.push_back(i);
            for (int j = i*2; j < n; j += i) {
                IsPrime[j] = false;
                if (MinFactor[j] == -1) MinFactor[j] = i;
            }
        }
    }
    return res;
}

vector<pair<int,int> > fast_factorize(int n) {
    vector<pair<int,int> > res;
    while (n != 1) {
        int prime = MinFactor[n]; // 最小の素因数
        int exp = 0;
        while (MinFactor[n] == prime) {
            ++exp;
            n /= prime;
        }
        res.push_back(make_pair(prime, exp));
    }
    return res;
}

map<int> factorize(int n)// 素因数分解
{
	map<int> ret;

	for(int i = 2; i*i <= n; ++i)
	{
		while(n % i == 0){
			ret[i]++;
			n /= i;
		}
	}
	if(n != 1) ret[n]++;

	return ret;
}

ll GCD(ll a, ll b){
    if(b==0) return a;

    return GCD(b, a % b);
}

ll LCM(ll a, ll b){
    ll ans;

    if(a > b) ans = (a / GCD(a, b)) * b;
    else ans = (b / GCD(a, b)) * a;

    return ans;
}

int main(){
    cin >> N;

    for(int i = 0; i < N; i++) cin >> T[i];

    for(int i = 0; i < N; i++) ans = LCM(ans, T[i]);

    cout << ans << endl;
}

