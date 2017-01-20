//Created by G(powe0101@naver.com)
//https://www.hackerrank.com/challenges/equality-in-a-array/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    map<int,int> array;
    
    int maxValue = 0;
    
    for(int i = 0; i < n; ++i)
    {
        int e;
        cin >> e;
        array[e] += 1;
        maxValue = max(maxValue,array[e]);
    }
    
    cout << n - maxValue << endl;
    
    return 0;
}
