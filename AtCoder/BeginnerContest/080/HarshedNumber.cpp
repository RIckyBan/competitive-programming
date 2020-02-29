#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

int N;

bool is_harshad(){
    int buff = N, digit_sum = 0;
    
    while(true){
        digit_sum += buff % 10;
        buff = buff / 10;
        if(buff==0) break;
    }

    if (N % digit_sum == 0) return true;
    else return false;
}

int main(){
    cin >> N;

    if(is_harshad()) cout << "Yes" << endl;
    else cout << "No" << endl;
}
