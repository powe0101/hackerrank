//https://www.hackerrank.com/challenges/repeated-string
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

long checkAstring(string s);

int main(){
    string s;
    cin >> s;
    long n;
    cin >> n;

    long count = checkAstring(s);
    long result = count * (n / s.size());

    for(unsigned i =0; i < n%s.size(); ++i)
        if(s[i] == 'a')
            result += 1;

    cout << result << endl;

    return 0;
}

long checkAstring(string s){
    long result = 0;

    string::iterator seek = s.begin();
    string::iterator end = s.end();

    for(; seek != end; ++seek)
        if(*seek == 'a')
            result += 1;

    return result;
}
