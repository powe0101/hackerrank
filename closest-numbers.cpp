//https://www.hackerrank.com/challenges/closest-numbers
//Created by G(powe0101@naver.com)
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> numbers(n);
    for(int i =0; i < n; ++i)
        cin >>numbers[i];
    
    int diffMin = INT_MAX;
    sort(numbers.begin(),numbers.end());
    
    string result = "";
    
    for(int i = 0; i < n-1; ++i)
    {
        int temp = abs(numbers[i]- numbers[i+1]);

        if(temp < diffMin){
            diffMin = temp;
            result = "";
            result += to_string(numbers[i]) + " " + to_string(numbers[i+1]) + " "; 
        }
        else if ( temp == diffMin){
           result += to_string(numbers[i]) + " " + to_string(numbers[i+1]) + " "; 
        }
    }
    
    cout << result << endl;
    
    return 0;
}
