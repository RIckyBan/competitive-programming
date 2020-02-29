#include <iostream>
#include <cmath>
#include <string>

using namespace std;

#define ll long long

ll ans = 0;
string Str;

void solve(){
    int N = Str.size();
	for(int i = 0; i < (1 << (N - 1)); i++) {
		ll sm = 0;
		ll buff = Str[0] - '0';
		for( int j = 0; j < N - 1; j++) {
			if (i & (1 << j)) {
				sm += buff;
				buff = 0;
			}
			buff = buff * 10 + Str[j + 1] - '0';
		}
		sm += buff;
		ans += sm;
	}
    cout << ans << endl;
}

int main(){
    cin >> Str;
    solve();
}
