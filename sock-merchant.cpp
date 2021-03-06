//https://www.hackerrank.com/challenges/sock-merchant
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
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }

    map<int,int> pairList;
    int count = 0;
    for(unsigned i = 0; i < c.size(); ++i){
        int key = c[i];
        pairList[key] += 1;
        if(pairList[key] == 2){
            count +=1;
            pairList[key] = 0;
        }
    }

    cout << count << endl;

    return 0;
}
