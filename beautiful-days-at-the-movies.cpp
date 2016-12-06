//Created by G(powe0101@naver.com)
//https://www.hackerrank.com/challenges/beautiful-days-at-the-movies

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int reverse(int n)
{
    int reversedNumber = 0, remainder;
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    //cout << reversedNumber << endl;
    return reversedNumber;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,max,k;
    cin >> i;
    cin >> max;
    cin >> k;
    
    int count = 0;
    for(; i <= max; ++i)
    {
        if( abs( i - reverse(i)) % k == 0 )
            count = count + 1;
    }
    cout << count << endl;
    return 0;
}
