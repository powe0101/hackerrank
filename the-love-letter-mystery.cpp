#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    
    for(int i = 0; i < t; ++i)
    {
        string s;
        cin >> s;
        int count = 0;
        for(int j = 0; j < s.size(); ++j)
        {
            char lch = s[j];
            char rch = s[s.size()-j-1];
            //cout << lch << " " << rch << endl;
            if (lch != rch)
            {
                if(lch > rch)
                    --s[j];
                else
                    --s[s.size()-j-1];
                --j;
                count++;
            }    
        }
        cout << count << endl;
    }
    
    return 0;
}
