#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <map>
using namespace std;

string list = "abcdefghijklmnopqrstuvwxyz";
int main() {
    int n;
    cin >> n;
    
    for(int i = 0; i < n; ++i)
    {
        string s;
        cin >> s;
        
        for(int j = 0; j < list.size(); ++j)
        {
            char ch = list[j];
            size_t pos = s.find(ch);
            if(pos == string::npos)
                list.erase(list.find(ch));
        }
    }
    cout << list.size() << endl;    
    return 0;
}
