//https://www.hackerrank.com/challenges/drawing-book
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the pageCount function below.
 */
int pageCount(int n, int p) 
{
    int temp = 0;
    for(int i = 1; i <= n; i += 2)
    {
        if(i >= p)
            break;
        temp += 1;
    }

    int result = 0;
    for(int i = n; i > 0; i -=2)
    {
        if(i-1 <= p && p <= i+1)
        {
            if(n == p){
                result = 0;
                break;
            }
            else if(n % 2 == 0 && i > n-1){
                result = 1;
                break;
            }
            break;
        }
        result += 1;
    }

    result = min(result, temp);

    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}
