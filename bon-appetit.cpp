#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n,k;
    cin >> n;
    cin >> k;
    
    vector<int> charges(n);
    int totalCharges = 0;
    for(int i = 0; i < n; ++i)
    {
        int charge;
        cin >> charge;
        charges[i] = charge;
        if(i != k)
            totalCharges += charge;
    }
    
    int b;
    cin >> b;
    
    int actual = b - (totalCharges / 2);
    
    if(actual == 0)
        cout << "Bon Appetit" << endl;
    else
        cout << actual << endl;
    
    
    return 0;
}
