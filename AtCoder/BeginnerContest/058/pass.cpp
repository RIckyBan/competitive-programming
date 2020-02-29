#include <iostream>
#include <string>

using namespace std;

#define ll long long

string O, E, ans = "";

int main(){
    cin >> O >> E;

    for(int i = 0; i < E.size(); i++){
        ans.push_back(O[i]);
        ans.push_back(E[i]);
    }
    if(O.size() > E.size()) ans.push_back(O.back());

    cout << ans << endl;
}
