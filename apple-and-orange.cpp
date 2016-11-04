//https://www.hackerrank.com/challenges/apple-and-orange
//Create by G(powe0101@naver.com)
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
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }

    int target = 0;
    int apple_count = 0;
    int orange_count = 0;

    for(unsigned i = 0; i < apple.size(); ++i)
    {
        target = (a + apple[i]);
        if (target >= s && target <= t)
            apple_count += 1;
    }

    for(unsigned i =0; i < orange.size(); ++i)
    {
        target = (b + orange[i]);
        if (target >= s && target <= t)
            orange_count += 1;
    }

    cout << apple_count << endl;
    cout << orange_count << endl;
    return 0;
}
