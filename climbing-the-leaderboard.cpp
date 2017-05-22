//https://www.hackerrank.com/challenges/climbing-the-leaderboard
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
    vector<int> scores(n);
    
    map <int,int> list;
    
    for(int scores_i = 0;scores_i < n;scores_i++){
       cin >> scores[scores_i];
       list[scores[scores_i]] += 1;
    }
    int m;
    cin >> m;
    vector<int> alice(m);
    for(int alice_i = 0;alice_i < m;alice_i++){
       cin >> alice[alice_i];
       
    }
    // your code goes here
    //7
    //100 100 50 40 40 20 10
    //4
    //5 25 50 120
    
    int rank = list.size() + 1;

    map<int,int>::iterator seek = list.begin();
    map<int,int>::iterator end = list.end();
 
    for(int i = 0; i < m; ++i)
    {
        for(; seek != end; ++seek)
        {
            if(alice[i] >= (*seek).first)
                    rank -= 1;
            else
                break;
        }    
        cout << rank << endl;
    }
    
    return 0;
}
