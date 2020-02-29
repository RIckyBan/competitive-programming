#include<iostream>
#include<string>

int main(){

std::string s;
int s1,s2,s3;

std::cin >> s;
s1 = s[0]-'0';s2 = s[1]-'0';s3 = s[2]-'0';

int sum = s1 + s2 +s3;
std::cout << sum << std::endl;

}
