#include <bitset>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    int N;
    cin >> N;

    stringstream ss;
    ss << bitset<8>(N);
    string S = ss.str();
    cout << S << endl;
}