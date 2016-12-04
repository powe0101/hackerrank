//Created by G(powe0101@naver.com)
//https://www.hackerrank.com/challenges/funny-string

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string makeReverseString(string _s)
{
    string::iterator seek = _s.end();
    string::iterator end = _s.begin() - 1;
    string result = "";
    for(; seek != end; --seek)
    {
        char t = (*seek);
        if(t)
            result = result + t;
    }

    return result;
}

bool compareString(string _s){
    string rs = makeReverseString(_s);

    for(int i = 1; i < _s.size(); ++i){
        int a = abs(_s[i] - _s[i-1]);
        int b = abs(rs[i] - rs[i-1]);
        if ( a != b)
            return false;
    }
    return true;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;

        bool isFunny;
        isFunny = compareString(s);

        if(isFunny)
            cout << "Funny" <<endl;
        else
            cout << "Not Funny" <<endl;
    }
    return 0;
}
