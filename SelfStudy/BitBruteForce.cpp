#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)

int N, s[105]={};
ll ans = 0, tmp_ans = 0;

int main(){
    cin >> N;

    rep(i, N){
        cin >> s[i];
    }

    for(int i = 0; i < (1 << N); i++) {
        ll buff = 0;
		for(int j = 0; j < N; j++) {
			if (i & (1 << j)) buff += s[j];
		}
        // printf("%lld\n",buff);
        tmp_ans = max(buff, tmp_ans);
        if(tmp_ans % 10 != 0) ans = tmp_ans;
	}
    
    cout << ans << endl;
}
