#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

#define ll long long

int N, a, b, Arr[1000005] = {0}, ans, low = 0;

void show_Array(){
    for(int i = 0; i < low; i++)  
        cout << Arr[i] << " ";    
    cout << endl;
}

int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> a >> b;
        Arr[a] += 1;
        Arr[b+1] -=1;
        low = max(low, b+1);  
    }
    // show_Array();
    ans = Arr[0];
    for(int i = 1; i <= low; i++){
        Arr[i] += Arr[i-1];
        ans = max(ans, Arr[i]);
    }

    // show_Array();

    cout << ans << endl;
}
