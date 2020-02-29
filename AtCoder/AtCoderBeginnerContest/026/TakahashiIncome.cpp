#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N, buff;
vector<ll> child[25];
ll salary[25] = {};

ll get_salary(int i){
    if(salary[i]==0){
        if(child[i].size()==0)
            salary[i] = 1;
        else{
            ll max_v = 0, min_v = 10000000000;
            for(auto itr=child[i].begin(); itr!= child[i].end(); itr++){
                ll buff = get_salary(*itr);
                min_v = min(min_v, buff);
                max_v = max(max_v, buff);
            }
            salary[i] = min_v + max_v + 1;
        }
    }
    return salary[i];
}

void solve(){
    cout << get_salary(1) << endl;
}

int main(){
    cin >> N;

    for(int i = 2; i <=N; i++){
        cin >> buff;
        child[buff].push_back(i);
    }

    solve();
}
