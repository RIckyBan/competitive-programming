#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector< pair<int, int> >
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N, cnt = 0;
bool isUsed[105]={};
vpii Red, Blue;

void print_Red(){
    cout << "Red" << endl;
    rep(i,N)
        printf("(%d,%d)\n", Red[i].first, Red[i].second);
}

void print_Blue(){
    cout << "Blue" << endl;
    rep(i,N)
        printf("(%d,%d)\n", Blue[i].first, Blue[i].second);
}

bool isOk(pii r, pii b){
    return r.first < b.first && r.second < b.second;
}

int calc_dist(pii r, pii b){
    return pow(b.first-r.first,2) + pow(b.second-r.second,2);
}

void solve(){
    for(int i = 0; i < N; i++){
        int min_id = -1, max_y = -1;
        for(int j = 0; j < N; j++){
            if(isOk(Red[j], Blue[i]) && !isUsed[j]){
                    int buff_y = Red[j].second;
                    if(buff_y >  max_y){
                        min_id = j;
                        max_y = buff_y;
                    }
                }
            }
        if(min_id != -1) isUsed[min_id] = true;
        }

    rep(i,N)
        if(isUsed[i]) cnt++;

    cout << cnt << endl;
}

int main(){
    cin >> N;
    int buff1, buff2;

    rep(i,N){
        cin >> buff1 >> buff2;
        Red.push_back(make_pair(buff1, buff2));
    }
    rep(i,N){
        cin >> buff1 >> buff2;
        Blue.push_back(make_pair(buff1, buff2));
    } 

    sort(Red.begin(), Red.end());
    sort(Blue.begin(), Blue.end());
    // print_Red();
    // print_Blue();

    solve();
}
