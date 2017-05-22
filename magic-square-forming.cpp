//https://www.hackerrank.com/challenges/magic-square-forming
//Created by G(powe0101@naver.com)
#include <bits/stdc++.h>

using namespace std;

const int arr[8][3][3] = {
    {{8,1,6},{3,5,7},{4,9,2}},
    {{4,9,2},{3,5,7},{8,1,6}},
    {{6,7,2},{1,5,9},{8,3,4}},
    {{8,3,4},{1,5,9},{6,7,2}},
    {{2,9,4},{7,5,3},{6,1,8}},
    {{6,1,8},{7,5,3},{2,9,4}},
    {{4,3,8},{9,5,1},{2,7,6}},
    {{2,7,6},{9,5,1},{4,3,8}},
};


int main() {
    vector< vector<int> > s(3,vector<int>(3));
    for(int s_i = 0;s_i < 3;s_i++){
       for(int s_j = 0;s_j < 3;s_j++){
          cin >> s[s_i][s_j];
       }
    }
    
    int maxElement = 81;
    
    for(int i = 0; i < 8; ++i)
    {
        int nowElement = 0;
        for(int j = 0; j < 3; ++j)
        {
            for(int k = 0; k < 3; ++k)
            {
                nowElement += abs(s[k][j] - arr[i][j][k]);
            }
        }
        if(nowElement  < maxElement)
            maxElement = nowElement;
    }
    
    cout << maxElement << endl;
    //  Print the minimum cost of converting 's' into a magic square
    return 0;
}
