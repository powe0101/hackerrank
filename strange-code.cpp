//https://www.hackerrank.com/challenges/strange-code
//Created by G(powe0101@naver.com)

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;




int main(){
    long long t;
    cin >> t;
    
    long startValue = 3;
    long value = 3;
    int timer = 1;
    
    for(;; ++timer)
    {
        if (timer == t)
            break;
        else if(value == 1){
            startValue *= 2;
            value = startValue;
        }
        else
            --value;
    }
    
    
    cout << value << endl;
 
    return 0;
}
