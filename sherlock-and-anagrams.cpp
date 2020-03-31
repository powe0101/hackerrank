//Created by G(powe0101@naver.com)
//https://www.hackerrank.com/challenges/sherlock-and-anagrams

#include <bits/stdc++.h>

using namespace std;

int sherlockAndAnagrams(string s)
{
    map <string, int> strList;
    
    vector<int> k(s.size()+1);
    
	for (int i = 1; i < s.size() + 1; i++)
    {
        k[i] = k[i - 1] + i - 1;
        //cout << k[i] << " ";
    }
    
    //cout << endl;
    
    for(int i = 1; i < s.size(); ++i)
    {
        for(int j = 0; j < s.size() - i + 1; ++j)
        {
            string subStr = s.substr(j,i);
            sort(subStr.begin(),subStr.end());
            strList[subStr]++;
        }
    }
    
    
    int count = 0;
    
    map <string, int>::const_iterator seek = strList.begin();
    map <string, int>::const_iterator end = strList.end();
    
    for(; seek != end; ++seek)
    {
       //cout << "[" <<  seek->second << "]" << endl;
       count += k[seek->second];
    }
    
    return count;
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        int result = sherlockAndAnagrams(s);
        cout << result << endl;
    }
    return 0;
}
