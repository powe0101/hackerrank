//https://www.hackerrank.com/challenges/unbounded-knapsack/
//Created by G(powe0101@naver.com)
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;
//2
//3 12
//1 6 9
//5 9
//3 4 4 4 8

const int MAX = 2001;

int main() {
    int t_max;
    cin >> t_max;
    
    for(int t = 0; t < t_max; ++t)
    {
        int n,k;
        cin >> n >> k;
        vector <int> c(n);
        
        for(int i = 0; i < n; ++i)
            cin >> c[i];
        
        vector <int> list(MAX);
        
        for(int i = 0; i < n; ++i)
        {
            int temp = c[i];
            for(int j = 1; j <= k; ++j)
            {
                if(j >= temp){
                    //cout <<j-temp << endl;
                    list[j] = max(list[j-temp] + temp, list[j]);
                }
            }
            //cout << endl;
        }
        cout << list[k] << endl;
    }
    return 0;
}
