#include <iostream>
#include <string>

using namespace std;

int h,  m, s;

int main(){
    int N;
    
    cin >> N;

    s = N % 60;
    N = N / 60;
    m = N % 60;
    h = N / 60; 

    string h_st, m_st, s_st;
    h_st = to_string(h);
    m_st = to_string(m);
    s_st = to_string(s);
    if( h <10) h_st = '0' + h_st;
    if( m < 10) m_st = '0' + m_st;
    if( s <10) s_st = '0' + s_st;

    cout << h_st << ":" << m_st << ":" << s_st << endl;
}