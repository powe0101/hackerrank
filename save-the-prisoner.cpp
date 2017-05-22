//https://www.hackerrank.com/challenges/save-the-prisoner
//Created by G(powe0101@naver.com)
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int numberOfTest;
    cin >>numberOfTest;
    
    for(int i = 0; i < numberOfTest; ++i)
    {
        int numberOfPrisoners, numberOfSweets, startPrisonerID;
        cin>> numberOfPrisoners >> numberOfSweets >> startPrisonerID;
        
        int interval = ((startPrisonerID  - 1 )+ numberOfSweets) % numberOfPrisoners;
        
        if (interval == 0)
            interval = numberOfPrisoners;
        
        cout << interval << endl;
    }
    
    return 0;
}
