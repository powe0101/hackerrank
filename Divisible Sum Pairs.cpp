//https://www.hackerrank.com/challenges/divisible-sum-pairs
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
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    int count = 0;
    for(int i=0; i < n; ++i)
    {
        for(int j =0; j < n; ++j)
        {
            int temp = (a[i] + a[j]);
            if( i < j &&  (temp % k) == 0)
                count += 1;
        }

    }
    cout << count << endl;
    return 0;
}
