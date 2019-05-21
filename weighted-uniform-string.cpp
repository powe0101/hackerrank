//Created by G(powe0101@naver.com)
//https://www.hackerrank.com/challenges/weighted-uniform-string
//2가지 방식의 풀이 

#include <bits/stdc++.h>

using namespace std;

void GetWeights(char alphabet, const string & s, vector<int>& weights)
{
    for (unsigned count = 1, i = 0; i < s.size(); ++i) 
    {
        const char ch = s[i];

        if (ch == alphabet) 
        {   
            weights.push_back((alphabet - 96) * count++); 
        }
        else
        {
            count = 1;
        }
    }
}

vector<string> FindQueriesByWeights(const vector<int>& queries, const vector<int>& weights)
{
    vector<string> result;

    for (int i = 0; i < queries.size(); ++i) {
      auto pos = find(weights.begin(), weights.end(), queries[i]);
      if (pos == weights.end())
        result.push_back("No");
      else
        result.push_back("Yes");
    }

    return result;
}

// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(const string& s, const vector<int>& queries) 
{
    vector<int> weights;

    for(auto alphabet = 'a'; alphabet <= 'z'; ++alphabet)
    {
        GetWeights(alphabet, s, weights);
    }

    auto result = FindQueriesByWeights(queries, weights);
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> queries(queries_count);

    for (int i = 0; i < queries_count; i++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<string> result = weightedUniformStrings(s, queries);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}




#include <bits/stdc++.h>

using namespace std;

const string alphabets = "abcdefghijklmnopqrstuvwxyz";

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    
    map<int,int> list;
    for(int i = 0; i < alphabets.size(); ++i)
    {
        char ch = alphabets[i];
        int uniform = (ch-96);
        int query = 0;

        for(int pos = 0; pos < s.size(); pos++)
        {
            char targetCh = s[pos];
            if(ch == targetCh){
                query += uniform;
                list[query] = 1;
            }
            else
            {
                query = 0;
            }
        }
        
    }
    
    for(int a0 = 0; a0 < n; a0++){
        int x;
        cin >> x;
        
        if(list[x])
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
