#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long
#define vi vector<int>

ll N, buff, ans = 0;
vi vec;

int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> buff;
        vec.push_back(buff);
    }

    sort(vec.begin(), vec.end());
    reverse(vec.begin(),vec.end());

    for(int i = 0; i < N; i++) ans += pow(-1,i) * vec[i];

    cout << ans << endl;
}
