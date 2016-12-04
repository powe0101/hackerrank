//Created by G(powe0101@naver.com)
//https://www.hackerrank.com/challenges/mars-exploration/
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

const string TARGET = "SOS";

int main(){
    string S;
    cin >> S;

    //SOSSPSSQSSOR
    int j = 0;
    int count = 0;
    for(int i = 0; i < S.size(); ++i, ++j)
    {
        char t = S[i];
        if(j > 2)
            j = 0;

        if(t == TARGET[j])
            continue;
        else
            count += 1;
    }

    cout << count << endl;

    return 0;
}
