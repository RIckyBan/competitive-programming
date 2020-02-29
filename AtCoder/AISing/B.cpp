#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
int N, A, B, P[100+5] = {0};
int q1 = 0, q2 = 0, q3 = 0;
cin >> N >> A >> B;

for(int i = 0; i < N; i++){
    cin >> P[i];
}

for(int i = 0; i < N; i++){
    if(P[i] <= A) q1++;
    else if (P[i] <= B) q2++;
    else q3++;
}
int ans = min(q1, q2);
ans = min(ans, q3);

cout << ans << endl;
}
