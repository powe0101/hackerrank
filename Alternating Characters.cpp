//Created by G(powe0101@naver.com)
//https://www.hackerrank.com/challenges/alternating-characters

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


const string ts[2] = {"AB","BA"};

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;

        int del = 0;
        for(int j = 0; j < s.size(); ++j)
        {
            if(s[j] == s[j-1])
                del += 1;
        }
        cout << del << endl;
    }
    return 0;
}
