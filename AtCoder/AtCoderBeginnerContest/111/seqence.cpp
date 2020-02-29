#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vpllll vector<pair <long long, long long > >
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll N, ans;
vll V;
vpllll vec_even, vec_odd;
map<ll, ll> MP_odd, MP_even;

void solve(){
    rep(i,N){
        if(i % 2 == 1)
            MP_odd[V[i]]++;
        else MP_even[V[i]]++;
    }

    // for(auto itr=MP.begin(); itr!= MP.end(); itr++)
    //     cout << itr->first << ": " << itr->second << " ";
    // cout << endl;

    for(auto itr=MP_odd.begin(); itr!= MP_odd.end(); itr++)
            vec_odd.push_back(make_pair(itr->second, itr->first));
    
    sort(vec_odd.rbegin(), vec_odd.rend());

    for(auto itr=MP_even.begin(); itr!= MP_even.end(); itr++)
            vec_even.push_back(make_pair(itr->second, itr->first));
    
    sort(vec_even.rbegin(), vec_even.rend());

    if(vec_odd[0].second != vec_even[1].second)
        ans = N - vec_odd[0].first - vec_even[0].first;
    else 
        ans = N - max(vec_odd[0].first + vec_even[1].first, vec_even[0].first + vec_odd[1].first);

    cout << ans << endl;
}

int main(){
    cin >> N;
    V.resize(N,0);
    rep(i,N)
        cin >> V[i];

    solve();
}
