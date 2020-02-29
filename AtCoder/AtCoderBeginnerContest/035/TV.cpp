#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int W, H;

int main(){
    cin >> W >> H;

    if(W / 4 == H / 3)
        cout << "4:3" << endl;
    else
        cout << "16:9" << endl;  
}
