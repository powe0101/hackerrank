//https://www.hackerrank.com/challenges/maximizing-xor
//Created by G(powe0101@naver.com)

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    int result = 0;
    for(int i = l; i <= r; ++i)
    {
        for(int j = l; j <= r; ++j)
        {
            result = max(i^j,result);
        }
    }
    return result;
}

int main() {
    int res;
    int _l;
    cin >> _l;
    
    int _r;
    cin >> _r;
    
    res = maxXor(_l, _r);
    cout << res;
    
    return 0;
}
