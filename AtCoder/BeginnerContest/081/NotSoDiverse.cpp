#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N, K, buff, ans = 0;
vi vec;
map<int, int> mp;

int main(){
    cin >> N >> K;

    rep(i,N){
        cin >> buff;
        mp[buff]++;
    }

    for(auto itr = mp.begin(); itr != mp.end(); ++itr){
        vec.push_back(itr->second);
    }

    sort(vec.begin(), vec.end());
    if(vec.size() > K){
        for(int i =0; i < K; i++) vec.pop_back();

        for(auto itr = vec.begin(); itr != vec.end(); ++itr) ans += *itr;
    }
    
    cout << ans << endl;
}
