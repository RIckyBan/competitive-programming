#include <iostream>
using namespace std;

int N, buff, MAX = 0, sub_MAX = 0;

int main(){
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> buff;
        if(buff > MAX){
            sub_MAX = MAX;
            MAX = buff;
        } else if(buff > sub_MAX && buff!=MAX) sub_MAX = buff;
    }
    cout << sub_MAX << endl;
}