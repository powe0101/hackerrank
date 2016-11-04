//https://www.hackerrank.com/challenges/time-conversion
//Create by G(powe0101@naver.com)
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string time;
    cin >> time;

    string::iterator seek = time.begin();
    string::iterator end = time.end();

    end -= 2;

    int hh = 0;
    char temp[3] = {};

    temp[0] = *seek; ++seek;
    temp[1] = *seek; ++seek;

    hh = atoi(temp);
    if('P' == *end){
        if (hh != 12)
            hh += 12;
        if (hh == 24){
            temp[0] = '0';
            temp[1] = '0';
        }
        else
            sprintf(temp,"%d",hh);
    }
    else{
        if (hh == 12){
            temp[0] = '0';
            temp[1] = '0';
        }
    }

    for(unsigned i = 0; i < 2; ++i)
    {
        time[i] = temp[i];
    }

    time.erase(time.size()-2,2);

    cout << time << endl;
    return 0;
}
