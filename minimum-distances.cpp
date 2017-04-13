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
    vector<int> A(n);
    for(int i = 0;i < n;i++){
       cin >> A[i];
    }
    
    int minValue = INT_MAX;
    for(int i = 0; i < n; ++i)
    {
        int value = A[i];
        for(int j = A.size() - 1; j > i; --j)
        {
            if (value == A[j]){
                minValue = min(abs(i-j),minValue);
                break;
            }
        }
    }
    if(minValue == INT_MAX) minValue = -1;
    cout << minValue << endl;
    return 0;
}
