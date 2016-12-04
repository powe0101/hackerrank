//Created by G(powe0101@naver.com)
//https://www.hackerrank.com/challenges/encryption

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    string s;
    cin >> s;
    
    double rows = ceil(sqrt(s.size()));
    double cols = floor(sqrt(s.size()));
    //cout << rows << cols << endl;
    for(double j = 0; j < cols + 1; ++j)
    {
        string t = "";
        for(double i = 0; i < rows; ++i)
        {
            char ch = s[(i*rows)+j];
            if(ch != 0)
                t += ch;
        }

        if (rows == cols && t.size() == rows)
            cout << t << " ";
        else if(rows != cols && t.size() > cols - 2)
            cout << t << " ";
    }

    return 0;
}
