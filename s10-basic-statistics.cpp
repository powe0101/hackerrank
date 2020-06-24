//https://www.hackerrank.com/challenges/s10-basic-statistics
#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    
    cin >> n;
    vector <float> list(n);
    for(int i = 0; i < n; ++i)
    {
        cin >> list[i];
    }

    float result[3] = {0,0,0};

    for(int i = 0; i < n; ++i)
    {
        result[0] += list[i];
    }

    result[0] /= n;

    sort(list.begin(),list.end());
    result[1] = (list[n/2] + list[n/2-1]) / 2;


    map<float,int> counts;
    for(int i = 0; i < n; ++i)
    {
        counts[list[i]] += 1;
    }
    float pos = 0, temp = 0;
    for(auto iter = counts.begin(); iter != counts.end(); ++iter)
    {
        if(temp < iter->second)
        {
            temp = iter->second;
            pos = iter->first;
        }
    }

    result[2] = pos;

    cout << result[0] << endl << result[1] << endl << result[2] << endl;
    return 0;
}
