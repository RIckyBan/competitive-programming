#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N,Q,s,t;
string S;
vi vec;

void print_vec(){
    for(auto itr = vec.begin(); itr != vec.end(); itr++)
        cout << *itr;
    cout << endl;
}

void solve(int s, int t){
    int s_id = lower_bound(vec.begin(), vec.end(), s) - vec.begin();
    int t_id = upper_bound(vec.begin(), vec.end(), t) - vec.begin();

    // printf("(%d, %d): (%d, %d)\n",s, t, s_id,t_id);

    cout << t_id - s_id << endl;
}

int main(){
    cin >> N >> Q >> S;

    for(int i = 1; i < N; i++){
        if(S[i] == 'C' && S[i-1] == 'A') vec.push_back(i-1);
    }

    // print_vec();
    
    rep(i, Q){
        cin >> s >> t;
        solve(s-1, t-2);
    }
}
