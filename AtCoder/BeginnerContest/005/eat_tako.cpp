#include <iostream>
#include <queue>

using namespace std;

priority_queue<int> que;

int N, buff;

int main(){
    cin >> N;

    for(int i = 0; i < N; ++i){
        cin >> buff;
        que.push(-1*buff);
    }
    cout << -1*que.top() << endl;
}