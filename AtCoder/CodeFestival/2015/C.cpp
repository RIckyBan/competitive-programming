#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define MAXN 100005
#define MAXM 100005
#define MOD 1000000007
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define pii pair<int, int>

ll cnt = 0, tSum = 0;
int N,T;
vi A, B;
vector<pii> vec;
bool flag = false;

void solve(){
    if(T >= tSum){
        cout << 0 << endl;
        return;
    }

    rep(i, N){
        pii tmp = make_pair(A[i] - B[i], i);
        vec.push_back(tmp);
    }

    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    rep(i, N){
        tSum -= vec[i].first;
        cnt++;
        if(T >= tSum){
            flag = true;
            break;
        }
    }

    if(flag){
        cout << cnt << endl;
    }
    else{
        cout << -1 << endl;
    }
}

int main(){
    cin >> N >> T;
    A.resize(N), B.resize(N);
    rep(i, N){
        cin >> A[i] >> B[i];
        tSum += A[i];
    }



    solve();
}
