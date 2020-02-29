#include <iostream>

using namespace std;

int N;
int arr[6][6] = {{1, 2, 3, 4, 5, 6}, {2, 3, 4, 5, 6, 1}, {3, 4, 5, 6, 1, 2}, {4, 5, 6, 1, 2, 3}, {5, 6, 1, 2, 3, 4}, {6, 1, 2, 3, 4, 5}};

void print_arr(int i){
    for(int j = 0; j < 6; ++j) cout << arr[i][j];
    cout << endl;
}

void op(int N){
    int res = N % 30;
    if(res % 5 == 0){
        int quo = res / 5;
        print_arr(quo);
    } else {
        int quo = res / 5;
        res = res % 5;
        for(int i = 0; i < res; ++i){
            swap(arr[quo][i], arr[quo][i+1]);
        }
        print_arr(quo);
    }
}

int main(){
    cin >> N;
    op(N);
}