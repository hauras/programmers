#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    bool flag = false;

    for(int j=0; j<s.size(); j++)
    {
        vector<char> res;

        for(int i=0; i<s.size(); ++i)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') 
            {
                res.push_back(s[i]);
                flag = true;
            }
            else 
            {
                if(!res.empty())
                {
                    if (s[i] == ']' && res.back() == '[')
                    res.pop_back();
                if (s[i] == '}' && res.back() == '{')
                    res.pop_back();
                if (s[i] == ')' && res.back() == '(')
                    res.pop_back();
                }
                
            }
        }   
       if(res.empty() && flag) answer++;
    
        char c = s.front();
        s.erase(s.begin());
        s.push_back(c);
    }
    
    return answer;
}