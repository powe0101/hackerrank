//https://www.hackerrank.com/challenges/pangrams/
//Created by G(powe0101@naver.com)
#include <cmath>
#include <cstdio>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;

    getline(cin,s);
    std::transform(s.begin(), s.end(), s.begin(), ::tolower);
    map <char,int> list;
    for(unsigned i =0; i < s.size(); ++i)
    {
        list[s[i]] += 1;
    }

    if (list.size() > 26)
        cout << "pangram" << endl;
    else
        cout <<"not pangram" << endl;

    return 0;
}
