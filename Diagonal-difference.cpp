//https://www.hackerrank.com/challenges/diagonal-difference
//Create by G(powe0101@naver.com)
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    long long diagonalColsSum = 0;
    long long diagonalRowsSum = 0;
    int j = 0;
    for(unsigned i = 0; i < n; ++i)
    {
        diagonalColsSum += a[i][j];
        ++j;
    }

    j = n-1;
    for(int i =0; i < n; ++i)
    {
        diagonalRowsSum += a[i][j];
        --j;
    }

    cout << abs(diagonalRowsSum - diagonalColsSum) << endl;

    return 0;
}
