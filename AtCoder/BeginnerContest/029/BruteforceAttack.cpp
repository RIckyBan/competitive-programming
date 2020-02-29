#include <iostream>
#include <vector>
#include <string>

using namespace std;

int N;
// vector<string> ans = {"a", "b", "c"};

// void solve(){
//     for(int i = 0; i < N-1; i++){
//         int num = ans.size();
//         for(int j = 0; j < num; j++){
//             string buff = ans.front();
//             ans.erase(ans.begin());
//             ans.push_back(buff+'a');
//             ans.push_back(buff+'b');    
//             ans.push_back(buff+'c');
//         }
//     }
    
//     for(auto itr=ans.begin(); itr!=ans.end();itr++){
//         cout << *itr << endl;
//     }
// }

void solve(int rest, string s){
    if(rest == 0) cout << s << endl;
    else{
        for(char c = 'a'; c <= 'c'; c++){
            solve(rest-1, s + c);
        }
    }
}

int main(){
    cin >> N;

    solve(N, "");
}
