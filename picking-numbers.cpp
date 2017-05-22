//https://www.hackerrank.com/challenges/picking-numbers
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
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    
    
    map<int,int> list;
    
    for(int i = 0; i < n; ++i)
    {
        list[a[i]]++;
    }
    
    map<int,int>::iterator seek = list.begin();
    map<int,int>::iterator end = list.end();
    int count = 0;
    
    if(list.size() > 1)
        --end;
    for(; seek != end--;)
    {
        int temp = (*seek).second + (*++seek).second;
        //cout << temp << endl;
        if(temp > count)
            count = temp;
    }
    
    cout << count << endl;
    return 0;
}
