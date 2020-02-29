#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

typedef long long int ll;

int main(){
    int n;
    cin >> n;
    
    ll aa=1,b=1;
    ll t,a,s;

for(int i=0;i<n;i++) {
    cin >> t >> a;
    aa = aa/t+(aa%t==0?0:1);
    b = b/a+(b%a==0?0:1);
    s = max(aa,b);
    aa=s*t; b=s*a;
    }
cout << aa+b<<endl;
}
