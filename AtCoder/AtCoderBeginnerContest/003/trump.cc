#include <iostream>
#include <string>

using namespace std;

string S, T;

char words[7] = {'a', 't', 'c', 'o', 'd', 'e', 'r'};

bool can_replace(char c);
bool judge(string S, string T);

int main(){
    cin >> S >> T;

    if(judge(S, T)) cout << "You can win" << endl;
    else cout << "You will lose" << endl;
}

bool judge(string S, string T){
    int n = S.size();
    char buff1, buff2;

    for(int i = 0; i < n; ++i){
        buff1 = S.back(); S.pop_back();
        buff2 = T.back(); T.pop_back();
        if(buff1 != buff2){
            if((buff1 == '@' && can_replace(buff2))||(can_replace(buff1) && buff2 == '@')) continue;
            else return false;
        }
    }
    return true;
}

bool can_replace(char c){
    for(int i = 0; i < 7; ++i){
        if(c == words[i]) return true;
    }
    return false;
}