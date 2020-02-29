#include <iostream>
#include <map>
#include <string>
#include <cmath>

using namespace std;

#define ll long long
#define vi vector<int>

map<string, int> MP_P, MP_N;

ll N, M;
int ans=0;
string s[105], t[105];

int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s[i];
        MP_P[s[i]]++;
    } 
    cin >> M;
    for(int i = 0; i < M; i++) {
        cin >> t[i];
        MP_N[t[i]]++;
    }

    for(int i = 0; i < N; i++){
        string buff = s[i];
        ans = max(ans, MP_P[buff]-MP_N[buff]);
    }

    cout << ans << endl;
}
