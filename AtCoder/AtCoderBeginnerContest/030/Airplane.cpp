#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>

int N, M, X, Y, a[100005]={}, b[100005]={};

void solve(){
    int t = 0, cnt = 0, curA = 0, curB = 0;

    while(true){
        while(t > a[curA] && curA < N){
            curA++;
        }
        t = a[curA] + X;

        while(t > b[curB] && curB < M){
            curB++;
        }
        t = b[curB] + Y;

        if(curA == N || curB == M) break;
        else cnt++;
    }

    cout << cnt << endl;
}

int main(){
    cin >> N >> M >> X >> Y;

    for(int i = 0; i < N; i++)
        cin >> a[i];
    for(int i = 0; i < M; i++)
        cin >> b[i];

    solve();
}
