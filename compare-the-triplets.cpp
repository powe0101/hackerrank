//https://www.hackerrank.com/challenges/compare-the-triplets
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

int alice = 0;
int bob = 0;

void rewardPoint(int a, int b)
{
    if (a > b )
        alice += 1;
    else if(a < b )
        bob += 1;

}

void printPoint()
{
    cout << alice << " " << bob << endl;
}
int main(){
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;

    rewardPoint(a0,b0);
    rewardPoint(a1,b1);
    rewardPoint(a2,b2);

    printPoint();
    return 0;
}
