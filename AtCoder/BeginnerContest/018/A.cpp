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

ll ans;
int A,B,C;
vi score;

void checkScore(int val){
    if(val == score[0]) cout << 1 << endl;
    else if(val == score[1]) cout << 2 << endl;
    else cout << 3 << endl;
}

void solve(){
    checkScore(A);
    checkScore(B);
    checkScore(C);
}

int main(){
    score.resize(3);
    cin >> A >>  B >>  C;

    score[0] = A;
    score[1] = B;
    score[2] = C;

    sort(score.begin(), score.end());
    reverse(score.begin(), score.end());

    solve();
}
