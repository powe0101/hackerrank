#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n,m;
int lcs[1001][1001];  

int Len(vector<int> a,vector<int> b){
    for (int i = n; i >= 0; i--){
        for (int j = m; j >= 0; j--){
            if (i == n || j == m){
                lcs[i][j] = 0; 
            }else if (a[i] == b[j]){
                lcs[i][j] = 1+lcs[i+1][j+1];  
            }else{
                lcs[i][j] = max(lcs[i+1][j],lcs[i][j+1]);  
            }
        }
    }
    return lcs[0][0];  
}

void actual(vector<int> a, vector<int> b){
    int i = 0, j = 0;  
    while (i < m && j < n){
        if (a[i] == b[j]){
            cout << a[i] << " ";
            i++, j++;  
        }else if (lcs[i+1][j] >= lcs[i][j+1]){
            i++; 
        }else{
            j++; 
        }
    }
}

int main() {
    
    cin >> n >> m;
    
    vector<int> a(n);
    vector<int> b(m);
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    for(int i = 0; i < m; ++i)
        cin >> b[i];

    int length = n > m ? n : m;
    
    //vector <int> result(length);
    int max = Len(a,b);
    //cout << max << endl;
    //actual(a,b);
    
    int i = 0, j = 0;   
    while (i < n && j < m){
        if (a[i] == b[j]){
            cout << a[i] << " ";
            i++, j++;  
        }else if (lcs[i+1][j] >= lcs[i][j+1]){
            i++; 
        }else{
            j++; 
        }
    }
    return 0;
}
