#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define ll long long

int N, M, X, buff;
vector<int> vec;

int main(){
    cin >> N >> M >> X;

    for(int i = 0; i < M; i++){
        cin >> buff;
        vec.push_back(buff);
    }

    auto itr = lower_bound(vec.begin(),vec.end(), X);

    cout << min(itr - vec.begin(), vec.end() - itr) << endl;
}
