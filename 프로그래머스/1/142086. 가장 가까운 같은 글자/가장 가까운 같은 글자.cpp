#include <string>
#include <vector>
#include<unordered_map>
using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    unordered_map<char,int> charindex;
    
    for(int i=0; i<s.size(); i++)
    {
        if(charindex.find(s[i]) != charindex.end())
        {
            answer.push_back(i-charindex[s[i]]);
        }
        else
            answer.push_back(-1);
    
        charindex[s[i]] = i;
    }
    
    return answer;
}