//https://www.hackerrank.com/challenges/simple-array-sum
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
    int result = 0;
    for(unsigned i = 0 ; i < arr.size(); ++i){
        result += arr[i];
    }
    cout << result << endl;
    return 0;
}
