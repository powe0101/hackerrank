//Created by G(powe0101@naver.com)
//https://www.hackerrank.com/challenges/utopian-tree

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
        int height = 1;

        for(int i = 0; i < n; ++i)
        {
            if( (i % 2) == 0) //spring
                height = height * 2;
            else //summer
                height = height + 1;

        }
        cout << height << endl;
    }
    return 0;
}
