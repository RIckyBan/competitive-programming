#include <iostream>
#include <queue>

using namespace std;


int T, N, M, buff;
queue<int> A, B;

bool can_sell(){
    while(!B.empty() && !A.empty()){
        int person = B.front();
        B.pop();
        
        int sec = A.front();
        A.pop();

        while(sec <= person){
            if(person-sec <= T) break;
            else {
                if(A.empty()) return false;
                sec = A.front();
                A.pop();
            }
        }
        
        if(sec > person) return false;

        cout << "(person, sec) = (" << person << " ," << sec << ")" << endl;
    }
    return B.empty();
}

int main(){
    cin >> T >> N;

    for(int i = 0; i < N; ++i){
        cin >> buff;
        A.push(buff);
    }

    cin >> M;
    
    for(int i = 0; i < M; ++i){
        cin >> buff;
        B.push(buff);
    }

    if(can_sell()) cout << "yes" << endl;
    else cout << "no" << endl;
}