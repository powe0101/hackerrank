//https://www.hackerrank.com/challenges/between-two-sets/
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

int gcd(int a, int b)
{
    for (;;)
    {
        if (a == 0) return b;
            b %= a;
        if (b == 0) return a;
            a %= b;
    }
}

int lcm(int a, int b)
{
    int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}

int gcd(vector<int> array)
{
    int value = array[0];
    
    for(int i = 1; i < array.size(); ++i)
    {
        value = gcd(value,array[i]);
    }
    return value;
}

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];
    }
    
    int lcm_value = accumulate(a.begin(),a.end(),1,lcm);
    int gcd_value = gcd(b);
    
    
    //cout << lcm_value << endl;
    //cout << gcd_value << endl;
    
    
    int count = 0;
    for(int i = lcm_value, j = 2; i <= gcd_value; i = lcm_value * j, ++j )
    {
        if(gcd_value % i == 0)
            count ++;
    }
    cout << count << endl;
    return 0;
}
