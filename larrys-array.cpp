//https://www.hackerrank.com/challenges/larrys-array
//Created by G(powe0101@naver.com)
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> rotateArray(vector<int> &A, int B) 
{
    vector<int> ret; 
    
    for (int i = 0; i < A.size(); i++) 
    {
        ret.push_back(A[(i + B) % A.size()]);
    }
    
    return ret; 
}

void printArray(const vector <int> & A)
{
    for(int i : A)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; ++i)
    {
        int size;
        cin >> size;
        
        vector <int> list(size);
        for(int j = 0; j < size; ++j)
        {
            cin >> list[j];
        }      
        int count = 0;
        for(int j = 0; j < size -1; ++j)
        {
            for(int k = j+1; k < size ; ++k)
            {
                
                if(list[j] > list[k])
                {     
                    swap(list[j],list[k]);
                    count += 1;
                }
                //printArray(list);
            }
        }
        if(count % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
