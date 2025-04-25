#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    
    unordered_map<string,int> answer;
    
    for(auto name : participant)
        answer[name]++;
    for(auto name : completion)
        answer[name]--;
    
    for(auto i : answer)
    {
        if(i.second>0)
        {
            return i.first;
        }
    }
    
    return "";
}