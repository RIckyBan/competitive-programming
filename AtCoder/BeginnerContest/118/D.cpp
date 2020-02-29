#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

int N, M, buff;
const int Cost[10] = {0,2,5,5,4,5,6,3,7,6};
ll ans = 0;
vector<int> vec;

ll dfs(int N, ll val){
    if(N == 0) return val;
    else if(N < 0) return 0;
    else{
        ll buff = 0;
        int buffNum = 0, buffCost = 10;
        
        for(int i = 0; i < M; i++){
            int num = vec[i]; 
            if(Cost[num] < buffCost || buffNum < num){
                buff = max(dfs(N - Cost[num],val*10+num),buff);
                if(Cost[num] < buffCost) buffCost = Cost[num];
                if(buffNum < num) buffNum = num;
            }
        }
        return buff;
    }
}

int main(){
    cin >> N >> M;
    for(int i = 1; i <= M; i++) {
        cin >> buff;
        vec.push_back(buff);
    }

    cout << dfs(N, 0) << endl;

    }
