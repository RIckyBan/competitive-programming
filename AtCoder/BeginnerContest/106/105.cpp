#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int N;

int division_count(int n){
    int cnt = 0;
    int range = sqrt(n); //整数に丸める！

    for(int j = 1; j <= range; j++){
        if(n % j == 0) cnt+=2;
    }
    if(n == pow(range,2)) cnt--;

    return cnt;
}

int solve(){
    int ans = 0;
    for(int i = 1; i <= N; i++)
        if(i % 2 == 1 && division_count(i) == 8) ans++;
    return ans;
}

int main(){
    cin >> N;
    // printf("%d\n",division_count(N));
    cout << solve() << endl;
}
