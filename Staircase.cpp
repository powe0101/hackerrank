//https://www.hackerrank.com/challenges/staircase
//Created by G(powe0101@naver.com)
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;

    for(int i =0; i < n; ++i){
        for(int j = 1; j < n-i; ++j)
            cout << " ";
        for(int k = 0; k < i+1; ++k)
            cout << "#";
        cout << endl;
    }
    return 0;
}