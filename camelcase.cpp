//https://www.hackerrank.com/challenges/camelcase/
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
    string s;
    cin >> s;

    int count = 1;

    for(unsigned i = 0; i < s.size(); ++i)
    {
        char ch = s[i];
        if (isupper(ch))
            count += 1;
    }

    cout << count << endl;
    return 0;
}
