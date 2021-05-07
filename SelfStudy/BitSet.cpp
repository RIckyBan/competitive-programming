#include <bitset>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N;
    cin >> N;

    // cout << bitset<8>(1 << N) << endl;

    for (int bit = 0; bit < (1<<N); ++bit)
    {
        cout << bit << ": " << bitset<8>(bit) << " : ";

        vector<int> tmp;
        for(int j = 0; j < N; ++j) {
            if(bit & (1 << j)) tmp.push_back(j);
        }

        for(auto k: tmp) {
            cout << k << " ";
        }

        cout << endl;
    }
}