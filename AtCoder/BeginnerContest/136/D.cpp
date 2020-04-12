#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

int numR = 1, numL = 0, tmp;
string S;
char pre = 'R';
vi vec;
bool ans[MAXN] = {};


void solve(){
    for(int i = 1; i < S.size(); ++i){
        // cout << pre << " " << S[i] << endl;
        if(S[i] == 'R') {
            if(pre != S[i]){
                vec.push_back(numL);
                numR = 1;
            } else {
                numR++;
            }
        } else {
            if(pre != S[i]){
                vec.push_back(numR);
                numL = 1;
                ans[i-1] = true;
                ans[i] = true;
            } else {
                    numL++;
                }
            }
        pre = S[i];
        }

        vec.push_back(numL);

    rep(i, vec.size()/2){
        tmp = vec[i*2] + vec[i*2+1];
        
        if(tmp % 2 == 0){
            vec[i*2] = tmp/2;
            vec[i*2+1] = tmp/2;
        } else {
            if(max(vec[i*2]-1, vec[i*2+1]-1) % 2 != 0){
                swap(vec[i*2], vec[i*2+1]);
            }

            if(vec[i*2] > vec[i*2+1]){
                vec[i*2] = (tmp+1)/2;
                vec[i*2+1] = (tmp-1)/2;
            } else {
                vec[i*2+1] = (tmp+1)/2;
                vec[i*2] = (tmp-1)/2; 
            }

        }
    }

    int cur = 0;

    rep(i, S.size()){
        if(ans[i]){
            cout << vec[cur];
            cur++;
        } else 
            cout << 0;

        if(i == S.size()-1) cout << endl;
        else cout << " ";
    }
}

int main(){
    cin >> S;

    solve();
}
