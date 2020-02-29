// 約数の個数の求め方。以下の2通りを押さえる。

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int N;

int num_divisors_trial_division(int n){
    int range = sqrt(n);
    int cnt = 0;
    for(int i  = 1; i <= range; i++)
        if(n % i == 0) cnt+= 2;

    if(range * range == n) cnt--; //平方数だったら1引く

    return cnt;
}

int num_divisors_table(int n){
    int table[100 + 5] = {0};

    for(int i  = 1; i <= n; i++)
        for(int j = i; j <= n; j+=i)
            table[j] += 1;

    return table[n];
}

int main(){
    cin >> N;

    cout << num_divisors_trial_division(N) << endl;
    cout << num_divisors_table(N) << endl;
}