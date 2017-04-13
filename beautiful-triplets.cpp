#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,d;
    cin >> n >> d;
    
    vector <int> sequences(n);
    for(int i = 0; i < n; ++i)
    {
        int sequence;
        cin >> sequence;
        sequences[i] = sequence;
    }

    int count = 0;
    for(int i = 0; i < n; ++i)
    {
        int a_i = sequences[i];
        for(int j = i; j < n; ++j)
        {
            int a_j = sequences[j];
            int left = a_j - a_i;
            if(left != d)
                continue;
            for(int k = j; k < n; ++k)
            {
                int a_k = sequences[k];
                int right = a_k - a_j;
                if(right == d){
                    count += 1;
                    break;
                }
            }
        }
    }
    
    cout << count << endl;
    return 0;
}
