#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>

ll N, M, X, Y;
int buff;
bool flag = true;
vi Xs, Ys;

void solve(){
    int maxX = Xs.back();
    int minY = Ys.front();

    if(minY > maxX && minY > X && maxX < Y) flag = false;

    if(flag)
        cout << "War" << endl;
    else
        cout << "No War" << endl;
}

int main(){
    cin >> N >> M >> X >> Y;

    for(int i = 0; i < N; i++) {
        cin >>  buff;
        Xs.push_back(buff);
    }
    sort(Xs.begin(),Xs.end());

    for(int i = 0; i < M; i++) {
        cin >>  buff;
        Ys.push_back(buff);
    }
    sort(Ys.begin(),Ys.end());

    solve();
}
