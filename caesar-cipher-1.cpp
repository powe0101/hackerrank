//https://www.hackerrank.com/challenges/caesar-cipher-1/
//Created by G(powe0101@naver.com)

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//const string upper_alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZAB";
//const string lower_alphabets = "abcdefghijklmnopqrstuvwxyzab";

const int alphabet_size = 26;
int k;

char convertAlphabet(char ch,int alphabet)
{
    return ((ch - alphabet + k) % alphabet_size) + alphabet;
}
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    cin >> k;

    for(int i = 0; i < s.size(); ++i)
    {
        if('a' <= s[i] && s[i] <= 'z' )
            s[i] = convertAlphabet(s[i],'a');
        else if('A' <= s[i] && s[i] <= 'Z')
            s[i] = convertAlphabet(s[i],'A');
    }
    
    cout << s << endl;
    return 0;
}
