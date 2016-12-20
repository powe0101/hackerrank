//Created by G(powe0101@naver.com)
//https://www.hackerrank.com/challenges/beautiful-binary-string

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
    string B;
    cin >> B;
    int count = 0;
    int pos = 0;
    while((pos = B.find("010")) != string::npos){
        count += 1;
        B.replace(pos,3," ");
    }
    cout << count << endl;
    return 0;
}
