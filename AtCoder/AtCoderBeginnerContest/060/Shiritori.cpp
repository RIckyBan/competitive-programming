#include <iostream>
#include <string>

using namespace std;

int main(){


string A, B, C;

cin >> A >> B >> C;

bool flag = A.back() == B.front() && B.back() == C.front();

if (flag)  cout << "YES" << "\n";
else cout << "NO" << "\n";
}
