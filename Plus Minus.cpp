//https://www.hackerrank.com/challenges/plus-minus
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

    double positive = 0;
    double negative = 0;
    double zero = 0;

    for(unsigned i = 0; i < n; ++i){
        if (arr[i] > 0){
            positive += 1;
        }
        else if(arr[i] < 0){
            negative += 1;
        }
        else
            zero += 1;
    }
    cout << (positive / n) << endl;
    cout << (negative / n) << endl;
    cout << (zero / n) << endl;
    return 0;
}
