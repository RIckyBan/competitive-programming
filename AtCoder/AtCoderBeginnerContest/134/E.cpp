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

ll N;
int tmp,val,maxc;
vi As, colors;

void solve(){
    for(int i = N-1; i >=0; --i){
        val = As[i];
        if(i == N-1){
            colors.push_back(val);
            continue;
        }

        sort(colors.begin(), colors.end());
        maxc = colors[colors.size()-1];
        // printf("maxc is %d\n",maxc);

        if(val < maxc)
            colors.pop_back();

        colors.push_back(val);
    }

    cout << colors.size() << endl;
}

int main(){
    cin >> N;
    As.resize(N);

    rep(i,N){
        cin >> As[i];
    }

    solve();
}
