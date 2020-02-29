#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string S, T;
bool flag = false;

int main(){
    cin >> S >> T;

    int N = S.size();

    for(int i = 0; i < N; i++){
        if(S == T){
            flag = true;
            break;
        }
        char buff = S.front();
        S.erase(S.begin());
        S.push_back(buff);
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}
