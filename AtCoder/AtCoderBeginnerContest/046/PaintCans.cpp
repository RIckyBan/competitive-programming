#include<iostream>
#include<set>
using namespace std;

set<int> st;
int a, b, c;

int main(){
    cin >> a >> b >> c;
    st.insert(a);
    st.insert(b);
    st.insert(c);
    cout  << st.size() << endl;
}
