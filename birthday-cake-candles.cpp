//https://www.hackerrank.com/challenges/birthday-cake-candles
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
    int n;
    cin >> n;
    vector<int> height(n);
    int max_h = 0;
    for(int height_i = 0;height_i < n;height_i++){
       cin >> height[height_i];
       max_h = max(max_h,height[height_i]);
    }
    
    int c = 0;
    for(int i = 0; i < height.size(); ++i)
    {
        if(max_h == height[i])
            ++c;
    }
    
    cout << c << endl;
    
    
    return 0;
}
