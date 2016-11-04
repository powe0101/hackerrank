//https://www.hackerrank.com/challenges/a-very-big-sum
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
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }

    long long result = 0;

    for(unsigned int i = 0; i < n; ++i){
        result += arr[i];
    }
    cout << result << endl;
    return 0;
}
