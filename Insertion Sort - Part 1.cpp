//Created by G(powe0101@naver.com)
//https://www.hackerrank.com/challenges/insertionsort1

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void printSort(vector <int> ar)
{
    for(int i = 0; i < ar.size(); ++i)
    {
        cout << ar[i] << " ";
    }
    cout << endl;
}

void insertionSort(vector <int>  ar) {
    for(int i = 0; i < ar.size(); ++i)
    {
        int j = i - 1;
        int t = ar[i];
        while(ar[j] > t && j >= 0)
        {
            ar[j+1] = ar[j];
            j = j - 1;
            printSort(ar);
        }
        ar[j+1] = t;
    }
    printSort(ar);
}

int main(void) {
    vector <int>  _ar;
    int _ar_size;
    cin >> _ar_size;
    for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
        int _ar_tmp;
        cin >> _ar_tmp;
        _ar.push_back(_ar_tmp);
    }

    insertionSort(_ar);

    return 0;
}
