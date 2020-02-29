#include <iostream>
#include <string>

using namespace std;

string W, ans = "";

int main(){
    cin >> W;
    int N = W.size();

    for(int i = 0; i < N; ++i){
        char buff = W.back();
        W.pop_back();
        if( buff == 'a' || buff == 'i' || buff == 'u' || buff == 'e' || buff == 'o' ) continue;
        else ans = buff + ans;
    }

    cout << ans << endl;
}