//https://www.hackerrank.com/challenges/weighted-uniform-string/
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

const string alphabets = "abcdefghijklmnopqrstuvwxyz";

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    
    map<int,int> Queries;
    for(int i = 0; i < alphabets.size(); ++i)
    {
        char ch = alphabets[i];
        int query = 0;

        for(int pos = 0; pos < s.size(); ++pos)
        {
            char targetCh = s[pos];
            if(ch == targetCh){
                query += 1;
                Queries[query * (i+1)] = 1;
            }
            else if(query > 0){
                query = 1;
                Queries[query * (i+1)] = 1;
                break;
            }
        }
    }
    
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        
        if(Queries[x])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
