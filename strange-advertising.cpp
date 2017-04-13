#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    
    int man = 5;
    long total = 0;
    for(int i = 0; i < n; ++i)
    {
        total += floor(man/2);
        man = floor(man/2)*3;
    }
    
    cout << total << endl;
    return 0;
}
