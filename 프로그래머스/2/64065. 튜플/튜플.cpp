#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<int> a, vector<int> b)
{
    return a.size() < b.size();
}
vector<int> solution(string s) {
    vector<int> answer;
    
    vector<vector<int>> all_answer;
    
    string temp = "";
    for(char c : s)
    {
        if(isdigit(c)) // 숫자인지 확인
        {
            temp += c;
        }
        else
        {
            if(!temp.empty())
            {
                int num = stoi(temp);
                answer.push_back(num);
                temp = "";
            }
        }
        
        if( c == '}')
        {
            if(!answer.empty())
            {
                all_answer.push_back(answer);
                answer.clear();
            }
        }
    }
    
    sort(all_answer.begin(), all_answer.end(), compare);
    
    vector<int> result;
    
    bool check[100001] = {false,};
    
    for(auto res : all_answer)
    {
        for(auto rest : res)
        {
            if(check[rest] == false)
            {
                check[rest] = true;
                result.push_back(rest);
            }
            
        }
    }
    return result;
}