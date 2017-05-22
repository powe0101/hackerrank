//https://www.hackerrank.com/challenges/sherlock-and-the-beast
//Created by G(powe0101@naver.com)
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        
        int n;
        cin >> n;
        
        int temp = n;

        while ( temp % 3 != 0)
            temp -= 5;
        
        if ( temp < 0)
            cout << "-1" ;
        else
        {
            for(int i = 0; i < temp; ++i)
            {
                cout << "5"; 
            }
            for(int i = 0; i < n - temp; ++i)
            {
                cout << "3";
            }
        }
        
        cout << endl;
    }
    
    
    return 0;
}
