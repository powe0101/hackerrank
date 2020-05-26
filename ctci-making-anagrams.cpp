//https://www.hackerrank.com/challenges/ctci-making-anagrams
#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) 
{
    int answer = 0;

    reverse(a.begin(),a.end());
    if (a.compare(b) == 0)
        return 0;
    reverse(a.begin(),a.end());

    map <char,int> list;
    for(int i = 0; i < a.size(); ++i)
    {
        list[a[i]] += 1;
    }

    for(int i = 0; i < b.size(); ++i)
    {
        list[b[i]] -= 1;
    }

    for(auto iter = list.begin(); iter != list.end(); ++iter)
    {
        answer += abs((*iter).second);
    }

    return answer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
