#include <iostream>
#include <cmath>

using namespace std;

int N;

void search(int N){
    int diff = 2025 - N;
    for(int i = 1; i <= 9; i++){
        int quo = diff / i;
        if(diff % i == 0 && quo <= 9)   printf("%d x %d\n", i, quo);
    }
};

int main(){
    cin >> N;

    search(N);
}