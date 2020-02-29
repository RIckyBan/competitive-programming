#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int N, R[1000+5];
double ans;

int main(){
    cin >> N;

    for(int i = 0; i < N; i++)  cin >> R[i];

    sort(R, R+N, greater<int>());

    for(int i = 0; i < N; i++)  ans += pow(R[i],2) * pow(-1,i%2);
    ans *= M_PI;

    printf("%.12f\n",ans);
}
