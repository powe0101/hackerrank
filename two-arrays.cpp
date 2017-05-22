//https://www.hackerrank.com/challenges/two-arrays/
//Created by G(powe0101@naver.com)

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    
    for(int i = 0; i < t; ++i)
    {
        int n,k;
        cin >> n >> k;
        vector <int> a(n);
        
        for(int j = 0; j < n; ++j)
        {
            cin >> a[j];
        }
        vector <int> b(n);
        
        for(int j = 0; j < n; ++j)
        {
            cin >> b[j];
        }
        
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<int>());
        bool isYes = true;
        for(int j = 0; j < n; ++j)
        {
            if( a[j] + b[j] < k)
           {
                isYes = false;
                break;
            }
        }
        if(isYes)
            cout << "YES" << endl;
        else
            cout <<"NO" << endl;
    }
    return 0;
}
