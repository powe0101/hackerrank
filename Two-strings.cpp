//Created by G(powe0101@naver.com)
//https://www.hackerrank.com/challenges/two-strings

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string checkPair(string s1, string s2)
{
    int size = min(s1.size(),s2.size());
    for(int i = 0; i < size; ++i)
    {
        char t = s1[i];
        int pos = s2.find(t);
        if (pos >= 0)
            return "YES";
    }
    return "NO";
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        string s1,s2;
        cin >> s1;
        cin >> s2;
        cout << checkPair(s1,s2) << endl;
    }
    return 0;
}
