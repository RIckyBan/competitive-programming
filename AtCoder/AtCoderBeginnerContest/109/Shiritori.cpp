#include <iostream>
#include <string>
#include <set>

using namespace std;

int N;
string W[105];
set<string> ST;

void solve(){
    bool flag = true;
    if(ST.size() != N)
        flag = false;
    else{
        for(int i = 0; i < N-1; i++)
            if(W[i].back() != W[i+1].front()) flag = false;
    }
    if(flag)          
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main(){
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> W[i];
        ST.insert(W[i]);
    }

    solve();
}
