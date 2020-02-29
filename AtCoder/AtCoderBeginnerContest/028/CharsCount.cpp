#include <iostream>
#include <map>
#include <string>

using namespace std;

#define ll long long

map<char, int>  MP;
string S;

int main(){
    cin >> S;

    for(int i = 0; i < S.size(); i++)
        MP[S[i]]++;
    
    for(int i = 0; i < 6; i++){
        cout << MP['A'+i];
        if(i==5)cout << endl;
        else cout << " ";
    }
}
