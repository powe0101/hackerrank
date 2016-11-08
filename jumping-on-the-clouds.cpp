//https://www.hackerrank.com/challenges/jumping-on-the-clouds
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

bool checkCloud(int t);

int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }

    int cloud = 0;
    for(unsigned i = 0; i < n; ++i)
    {
        //현재 위치 구름과 바로 다음 위치 구름 비교
            //둘다 트루이면
                //현재 위치와 다음 다음 위치 구름 비교
                    // 트루이면
    }

    return 0;
}

bool checkCloud(int t)
{
    if (t)
    {
        return false //red
    }
    return true //green
}
