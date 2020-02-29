#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int S, a[105];

bool flag[1000000] = {0};

int calc(int n){
    if (n%2==0) return n/2;
    else return 3*n+1;
}

int main(){
    cin >> S;
    int index = 1;
    a[index] = S;
    // cout << a[index] << " ";
    flag[a[index]] = true;
    while(true){
        a[index+1] = calc(a[index]);
        // cout << a[index+1] << " ";
        if(flag[a[index+1]]) break;
        else flag[a[index+1]] = true;
        index++;
    } 
    // cout << endl;
    cout << index+1 << endl;
}
