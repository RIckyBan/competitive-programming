#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

#define INF 1e9
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define rep(i,n) for(int i=0, i##_len=(n); i<i##_len; ++i)

ll N;
int tmp;
vi vec;
stack<int> ans;
bool update = true;

void show_vec(){
    rep(i,vec.size()) cout << vec[i] << " ";
    cout << endl;
}

bool solve(){
    while(update){
        update = false;
        for(int i = vec.size()-1; i >= 0; --i){
            if(vec[i] == i+1){
                // show_vec();
                // printf("vec[%d] is %d\n",i,i+1);
                vec.erase(vec.begin()+i);
                ans.push(i+1);
                update = true;
                break;
            }
        }
    }
    return (vec.size() == 0);
}

int main(){
    cin >> N;

    rep(i,N){
        cin >> tmp;
        vec.push_back(tmp);
    }

    if(solve()){
        while(!ans.empty()){
            cout << ans.top() << endl;
            ans.pop();
        }
    } else
        cout << -1 << endl;
}
