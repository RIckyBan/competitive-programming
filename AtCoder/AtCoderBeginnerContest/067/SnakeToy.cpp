#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, K, buff, ans=0;
vector<int> vec;

int main(){
    cin >> N >> K;

    for(int i = 0; i < N; i++){
        cin >> buff;
        vec.push_back(buff);
    }
    
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());

    for(int i = 0; i < K; i++) ans += vec[i];

    cout << ans << endl;
}
