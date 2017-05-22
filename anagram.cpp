//https://www.hackerrank.com/challenges/anagram
//Created by G(powe0101@naver.com)

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int n, cnt = 0;
	cin >> n;
	string s, s1, s2;
	for (int i = 0; i < n; i++) {
		cin >> s;

		if (s.size() % 2 != 0) {
			cout << "-1" << endl;
		}
		else {
			s1 = s;
			s2 = s;
			s1.erase(s.size() / 2, s.size());
			s2.erase(0, s.size() / 2);
			/*
            sort(s1.begin(), s1.end());
			sort(s2.begin(), s2.end());          
			for (int i = 0; i < s1.size(); i++) {
				for (int j = 0; j <s2.size(); j++) {
					if (s1[i] != s2[j]) {
						cnt++;
					}
				}
			}
            */
      // abxx bbxx
            vector<int> v1(26, 0);
            vector<int> v2(26, 0);
            for(int i = 0; i < s1.size(); i++)
                v1[s1[i] - 'a']++;
            for(int i = 0; i < s2.size(); i++)
                v2[s2[i] - 'a']++;
            for(int i = 0; i < 26; i++){
                cnt += abs(v1[i] - v2[i]);
            }
            
			cout << cnt / 2 << endl;
			cnt = 0;
		}
	}
	return 0;
}

